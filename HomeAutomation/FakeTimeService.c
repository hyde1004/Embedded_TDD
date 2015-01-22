#include "FakeTimeService.h"

static Time sTime = {-1, -1};

void TimeService_GetTime(Time *time)
{
	time->minuteOfDay = sTime.minuteOfDay;
	time->dayOfWeek = sTime.dayOfWeek;
}

void FakeTimeService_SetMinute(int minuteOfDay)
{
	sTime.minuteOfDay = minuteOfDay;
}

void FakeTimeService_SetDay(int dayOfWeek)
{
	sTime.dayOfWeek = dayOfWeek;
}