typedef struct
{
	unsigned int daysSince1970;
	unsigned int year;
	unsigned int dayOfYear;
} RtcTime;

void SetYearAndDayOfYear(RtcTime * time);