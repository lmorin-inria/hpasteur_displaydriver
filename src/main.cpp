#define F_CPU 1000000UL
#include <util/delay.h>

#define HPASTEUR_DISPLAY_TESTS
#include <HpasteurDisplay.h>
#include <font.h>

namespace hpasteur {
  /*
   */
  class HPLetterFont : public HPLetter, public Font {
  public:
    /* Constructor */ HPLetterFont(void) : HPLetter(), Font() {}

    bool write(char chr) {
      uint8_t * charTable;
      size_t char_size;
      if (getCharacterByChar(chr, charTable, char_size)) {
        for (size_t idx=0; idx < char_size; idx++)
          ledOn(charTable[idx]);
        return true;
      }
      return false;
    }
  };

}
    
using namespace hpasteur;

int main(void)
{
  //HPLetter gpioSegment;
  //swapLeds(gpioSegment);

  HPLetterFont hpSegment;
  while (1) {
    for (uint8_t count = 0; count < 2; count++) {
      for (uint8_t index = 0; index < hpSegment.ledCount(); index++) {
        hpSegment.ledOn(index);
      }
      _delay_ms(1000);
    }

    for (char letter='A'; letter <= 'Z'; letter++) {
      for (size_t index = 0; index < 100; index++) {
        hpSegment.write(letter);
      }
    }
    for (char digit='0'; digit <= '9'; digit++) {
      for (size_t index = 0; index < 100; index++) {
        hpSegment.write(digit);
      }
    }
  }
}
