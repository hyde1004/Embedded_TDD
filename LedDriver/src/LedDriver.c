#include "LedDriver.h"

enum { ALL_LEDS_ON = ~0, ALL_LEDS_OFF = ~ALL_LEDS_ON };

static uint16_t * ledAddress;
static uint16_t ledsImage;

static uint16_t convertLedNumberToBit(int ledNumber)
{
	return 1 << (ledNumber - 1);
}
static void updateHardware(void)
{
	*ledAddress = ledsImage;
}

void LedDriver_Create(uint16_t * address)
{
	ledAddress = address;
	ledsImage = ALL_LEDS_OFF;
	updateHardware();
}

void LedDriver_Destory(void)
{
}

void LedDriver_TurnOn(int ledNumber)
{
	ledsImage |= convertLedNumberToBit(ledNumber);
	updateHardware();
}


void LedDriver_TurnOff(int ledNumber)
{
	ledsImage &= ~(convertLedNumberToBit(ledNumber));
	updateHardware();
}

void LedDriver_TurnAllOn(void)
{
	ledsImage = ALL_LEDS_ON;
	updateHardware();
}