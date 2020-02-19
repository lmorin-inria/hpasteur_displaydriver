#define F_CPU 1000000UL
#include <HpasteurDisplay.h>
#include <util/delay.h>

namespace hpasteur {

  void exploresubCombinations(AVRDisplaySegment &gpioSegment, size_t index)
  {
    if (index >= gpioSegment.size()) {
      // _delay_ms(100);
      return;
    }
    gpioSegment.setLevel(index, GpioPin::HIGH_IMPEDANCE);
    exploresubCombinations(gpioSegment, index+1);
    gpioSegment.setLevel(index, GpioPin::LOW);
    exploresubCombinations(gpioSegment, index+1);
    gpioSegment.setLevel(index, GpioPin::HIGH);
    exploresubCombinations(gpioSegment, index+1);
  }

  void swapLevels(AVRDisplaySegment &gpioSegment)
  {
    const uint16_t wait = 100;
    // size_t waitCount = 1;
    size_t cursor = 0;

    while (1) {
      if (gpioSegment.getButton(0)) cursor++;
      if (gpioSegment.getButton(1)) cursor--;
      cursor %= gpioSegment.size();

      for (size_t index = 0; index < gpioSegment.size(); index++) {
        gpioSegment.setLevel(index, GpioPin::LOW);
      }

      gpioSegment.setLevel(cursor, GpioPin::HIGH);
      _delay_ms(wait);
    }
  }

  void swapLeds(HPLetter &segment)
  {
    const uint16_t wait = 10;
    size_t waitCount = 1;
    size_t waitCountMult = 1;
    size_t cursor = 0;

    while (1) {
      if (waitCountMult >= 10) waitCountMult = 10;
      if (segment.getButton(0)) waitCount+=waitCountMult;
      if (segment.getButton(1) && waitCount) waitCount-=waitCountMult;
      waitCountMult = 1;

      segment.ledOn(cursor);
      for (size_t idx=0; idx < waitCount; idx++)
        _delay_ms(wait);
      cursor+=2;
      if (cursor >= segment.ledCount()) cursor = 0;
    }
  }
}
