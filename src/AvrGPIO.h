#ifndef AVR_GPIO_H
#define AVR_GPIO_H

#include <avr/io.h>
#include <GpioPin.h>

/*
  Atmel AVR Programming interfaces

  Functions/Classes need to be instantiated depending on the GPIO segment used
  \author L.Morin (UnivRennes1).

  Templated by the GPIO segment:
  * See: https://www.arduino.cc/en/Reference/PortManipulation
  * See: http://ww1.microchip.com/downloads/en/DeviceDoc/Atmel-7810-Automotive-Microcontrollers-ATmega328P_Datasheet.pdf
*/

/*
  Set an AVR GPIO pin (3 states)

  \param[id]    The port number in the segment
  \param[state] The 3 state value
*/
template<uint8_t DDR_A, uint8_t PORT_A>
static inline void setLevel_avrGpio(size_t id, GpioPin::State_t state) {
  static volatile uint8_t * const DDR  = (volatile uint8_t *) DDR_A;
  static volatile uint8_t * const PORT = (volatile uint8_t *) PORT_A;
  if (state != GpioPin::HIGH_IMPEDANCE) {
    (*DDR) |=  (1 << id);
    if (state == GpioPin::HIGH) { (*PORT) |=  (1 << id); }
    else               		{ (*PORT) &= ~(1 << id); }
  }
  else {
    (*DDR) &= ~(1 << id);
    (*PORT) &= ~(1 << id); // Deactivate pull-up resistor.
  }
}

/*
  Get level of an AVR GPIO pin (3 states)

  \param[id]       The port number in the segment
  \param[activate] Set the port "input" if not done previously
*/
template<uint8_t DDR_A, uint8_t PORT_A, uint8_t PIN_A>
inline GpioPin::State_t getLevel_avrGpio(size_t id, bool activate = false) {
  static volatile uint8_t * const DDR  = (volatile uint8_t *) DDR_A;
  static volatile uint8_t * const PORT = (volatile uint8_t *) PORT_A;
  static volatile uint8_t * const PIN  = (volatile uint8_t *) PIN_A;
  GpioPin::State_t result;
  
  uint8_t state = ((*DDR) & (1 << id)) >> id;
  if (!state) {
    uint8_t level = ((*PIN) & (1 << id)) >> id;
    result = level ? GpioPin::HIGH : GpioPin::LOW;
  }
  else if (activate) {
    (*DDR)  &= ~(1 << id);
    (*PORT) |=  (1 << id); // Activate pull-up resistor.
  }
  else result = GpioPin::HIGH_IMPEDANCE;
  return result;
}

/*
  AVR GPIO input pin class (3 states)

  The constructor can/is replaced by the #reset method
*/
template<uint8_t DDR_A, uint8_t PORT_A>
class AvrOuputPin: public OutputPin {
public:
  /* Constructor */ AvrOuputPin(size_t offset, State_t _default = HIGH_IMPEDANCE) : OutputPin(offset) {
    m_setFct = setLevel_avrGpio<((uint8_t) DDR_A), ((uint8_t) PORT_A)>;
  }
  void              reset(size_t offset, State_t _default = HIGH_IMPEDANCE) {
    OutputPin::reset(offset, setLevel_avrGpio<((uint8_t) DDR_A), ((uint8_t) PORT_A)>);
    setLevel(_default);
  }
};

/*
  AVR GPIO output pin class (3 states)

  The constructor can/is replaced by the #reset method
*/
template<uint8_t DDR_A, uint8_t PORT_A, uint8_t PIN_A>
class AvrInputPin: public InputPin {
public:
  /* Constructor */ AvrInputPin(size_t offset) : InputPin(offset) {
    m_getFct = getLevel_avrGpio<((uint8_t) DDR_A), ((uint8_t) PORT_A), ((uint8_t) PIN_A)>;
  }
  void              reset(size_t offset) {
    InputPin::reset(offset, getLevel_avrGpio<((uint8_t) DDR_A), ((uint8_t) PORT_A), ((uint8_t) PIN_A)>);
    getLevel(true);
  }
};

#endif
