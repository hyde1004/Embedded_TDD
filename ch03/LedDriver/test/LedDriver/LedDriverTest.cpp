#include "CppUTest/TestHarness.h"
#include "LedDriver.h"

TEST_GROUP(LedDriver)
{

};

TEST(LedDriver, LedsOffAfterCreate)
{
	uint16_t virtualLeds = 0xffff;
	LedDriver_Create(&virtualLeds);
	LONGS_EQUAL(0, virtualLeds);
}
