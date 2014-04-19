typedef struct
{
	unsigned int daysSince1980;
	unsigned int year;
	unsigned int dayOfYear;
} RtcTime;

void SetYearAndDayOfYear(RtcTime * time);