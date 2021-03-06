#include "CppUTest/TestHarness.h"
#include "LightControllerSpy.h"
#include "LightScheduler.h"

TEST_GROUP(LightScheduler)
{
	void setup()
	{
		LightController_Create();
		LightScheduler_Create();
	}

	void teardown()
	{
		LightScheduler_Destroy();
		LightController_Destroy();
	}
};

TEST(LightScheduler, ScheduleOnEverydayNotTimeYet)
{
	LightScheduler_ScheduleTurnOn(3, EVERYDAY, 1200);
//	FakeTimeService_SetDay(MONDAY);
//	FakeTimeService_SetMinute(1199);
	LightScheduler_Wakeup();

	LONGS_EQUAL(LIGHT_ID_UNKNOWN, LightControllerSpy_GetLastId());
	LONGS_EQUAL(LIGHT_STATE_UNKNOWN, LightControllerSpy_GetLastState());
}

TEST(LightScheduler, NoChangeToLightsDuringInitialization)
{
	LONGS_EQUAL(LIGHT_ID_UNKNOWN, LightControllerSpy_GetLastId());
	LONGS_EQUAL(LIGHT_STATE_UNKNOWN, LightControllerSpy_GetLastState());
}
