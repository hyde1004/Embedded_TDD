#include "unity.h"
#include "unity_fixture.h"
#include "RtcTime.h"

TEST_GROUP(zune);

TEST_SETUP(zune)
{

}

TEST_TEAR_DOWN(zune)
{

}

// TEST(zune, init)
// {
// 	TEST_FAIL_MESSAGE("Start here");
// }

TEST(zune, test_daysSince1980ForYear)
{
	TEST_ASSERT_EQUAL(1, daysSince1980ForYear(1980));
	TEST_ASSERT_EQUAL(367, daysSince1980ForYear(1981));
	TEST_ASSERT_EQUAL(10228, daysSince1980ForYear(2008));
}

TEST(zune, 2008_12_31_last_day_of_leap_year)
{
	TEST_IGNORE_MESSAGE("TBD");
	// RtcTime theDay;

	// PreCondition(&theDay);
	// TEST_ASSERT_EQUAL(theDay.daysSince1980, 10593);

	// RtcTime * rtcTime;

	int yearStart = daysSince1980ForYear(2008);
	// RtcTime_Create(rtcTime, yearStart+366);
	// assertDate(rtcTime, 2008, 12, 31);
}