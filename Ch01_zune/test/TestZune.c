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
TEST(zune, 2008_12_31_last_day_of_leap_year)
{
	RtcTime theDay;

	PreCondition(&theDay);
	TEST_ASSERT_EQUAL(theDay.daysSince1980, 10593);
}