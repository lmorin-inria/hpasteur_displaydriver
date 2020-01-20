#define F_CPU 1000000UL
#include <util/delay.h>

#define HPASTEUR_DISPLAY_TESTS
#include <HpasteurDisplay.h>

using namespace hpasteur;

int main(void)
{
  HPLetter gpioSegment;
  swapLeds(gpioSegment);
}
