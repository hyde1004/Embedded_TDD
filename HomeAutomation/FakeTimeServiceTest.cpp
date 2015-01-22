#include "CppUTest/TestHarness.h"
#include "FakeTimeService.h"

TEST_GROUP(FakeTimeService)
{

};

TEST(FakeTimeService, Create)
{
	Time time;
	TimeService_GetTime(&time);
	LONGS_EQUAL(TIME_UNKNOWN, time.minuteOfDay);
	LONGS_EQUAL(TIME_UNKNOWN, time.dayOfWeek);
}

TEST(FakeTimeService, Set)
{
	Time time;
	FakeTimeService_SetMinute(42);
	FakeTimeService_SetDay(SATURDAY);
	TimeService_GetTime(&time);
	LONGS_EQUAL(42, time.minuteOfDay);
	LONGS_EQUAL(SATURDAY, time.dayOfWeek);
}