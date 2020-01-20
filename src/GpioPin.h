#ifndef GPIO_PIN_H
#define GPIO_PIN_H
#include <stdlib.h>

/*
  Global abstract interface for three state GPIO libraries

  \author L.Morin (UnivRennes1).
*/

class GpioPin {
public:
  typedef enum { LOW = 0, HIGH = 1, HIGH_IMPEDANCE = -1, UNDEFINED = 2 } State_t;
  typedef void             (*SetLevelFct_t)(size_t id, GpioPin::State_t state);
  typedef GpioPin::State_t (*GetLevelFct_t)(size_t id, bool activate);

  /* Constructor */ GpioPin() : m_id(0) {}
  /* Constructor */ GpioPin(size_t id) : m_id(id) {}
protected:
  size_t            m_id;
};

class OutputPin : public GpioPin {
public:
  /* Constructor */ OutputPin() : m_id(0), m_setFct(NULL)           {}
  /* Constructor */ OutputPin(size_t id) : m_id(id), m_setFct(NULL) {}
  void              reset(size_t id, SetLevelFct_t setFct = NULL)   { m_id = id; m_setFct = setFct; }
  void              setLevel(State_t state)                         { if (m_setFct) m_setFct(m_id, state); }
protected:
  size_t            m_id;
  SetLevelFct_t     m_setFct;
};

class InputPin : public GpioPin {
public:
  /* Constructor */ InputPin() : m_id(0), m_getFct(NULL)           {}
  /* Constructor */ InputPin(size_t id) : m_id(id), m_getFct(NULL) {}
  void              reset(size_t id, GetLevelFct_t getFct = NULL)  { m_id = id; m_getFct = getFct; }
  State_t           getLevel(bool activate = false)                { return (m_getFct) ? m_getFct(m_id, activate) : HIGH_IMPEDANCE; }

protected:
  size_t            m_id;
  GetLevelFct_t     m_getFct;
};

class GpioSegment {
public:
  /* Constructor */ GpioSegment(void) : m_count(0) {}
  GpioPin *         getGPIO(size_t index)          { return NULL; }
  size_t            size(void) const               { return m_count; }

protected:
  size_t m_count;
};


#endif
