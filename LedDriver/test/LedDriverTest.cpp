#include "CppUTest/TestHarness.h"
#include "LedDriver.h"

static uint16_t virtualLeds;

TEST_GROUP(LedDriver)
{
	void setup(void)
	{
		LedDriver_Create(&virtualLeds);
	}
};

TEST(LedDriver, LedsOffAfterCreate)
{
	uint16_t virtualLeds = 0xffff;
	LedDriver_Create(&virtualLeds);
	LONGS_EQUAL(0, virtualLeds);
}

TEST(LedDriver, TurnOnLedOne)
{
	LedDriver_TurnOn(1);
	LONGS_EQUAL(1, virtualLeds);
}

TEST(LedDriver, TurnOffLedOne)
{
	LedDriver_TurnOn(1);
	LedDriver_TurnOff(1);
	LONGS_EQUAL(0, virtualLeds);
}

TEST(LedDriver, TurnOnMultipleLeds)
{
	LedDriver_TurnOn(9);
	LedDriver_TurnOn(8);
	LONGS_EQUAL(0x180, virtualLeds);
}

IGNORE_TEST(LedDriver, TurnOffAnyLed)
{
	LedDriver_TurnOn(9);
	LedDriver_TurnOn(8);
	LedDriver_TurnOff(8);
	LONGS_EQUAL(0x100, virtualLeds);
}

TEST(LedDriver, AllOn)
{
	LedDriver_TurnAllOn();
	LONGS_EQUAL(0xffff, virtualLeds);
}