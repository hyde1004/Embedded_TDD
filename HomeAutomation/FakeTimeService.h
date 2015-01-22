extern "C" 
{
typedef struct
{
	int minuteOfDay;
	int dayOfWeek;
} Time;


#define TIME_UNKNOWN	-1
#define SATURDAY	6


void TimeService_GetTime(Time *time);
void FakeTimeService_SetMinute(int minuteOfDay);
void FakeTimeService_SetDay(int dayOfWeek);
}