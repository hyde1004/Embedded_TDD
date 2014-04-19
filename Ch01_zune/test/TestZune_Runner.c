#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP_RUNNER(zune)
{
	RUN_TEST_CASE(zune, test_daysSince1980ForYear);
	RUN_TEST_CASE(zune, 2008_12_31_last_day_of_leap_year);
}