typedef struct
{
	unsigned int daysSince1980;
	unsigned int year;
	unsigned int dayOfYear;
} RtcTime;

void PreCondition(RtcTime * time);
void SetYearAndDayOfYear(RtcTime * time);
int daysSince1980ForYear(int year);
void RtcTime_Create(RtcTime * time, int initialDay);
