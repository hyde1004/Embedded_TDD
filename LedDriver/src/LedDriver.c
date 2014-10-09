#include "LedDriver.h"

enum { ALL_LEDS_ON = ~0, ALL_LEDS_OFF = ~ALL_LEDS_ON };

static uint16_t * ledAddress;
static uint16_t ledsImage;

void LedDriver_Create(uint16_t * address)
{
	ledAddress = address;
	ledsImage = ALL_LEDS_OFF;
	*ledAddress = ledsImage;
}

void LedDriver_Destory(void)
{
}

static uint16_t convertLedNumberToBit(int ledNumber)
{
	return 1 << (ledNumber - 1);
}

void LedDriver_TurnOn(int ledNumber)
{
	ledsImage |= convertLedNumberToBit(ledNumber);
	*ledAddress = ledsImage;
}


void LedDriver_TurnOff(int ledNumber)
{
	ledsImage &= ~(convertLedNumberToBit(ledNumber));
	*ledAddress = ledsImage;
}

void LedDriver_TurnAllOn(void)
{
	ledsImage = ALL_LEDS_ON;
	*ledAddress = ledsImage;
}