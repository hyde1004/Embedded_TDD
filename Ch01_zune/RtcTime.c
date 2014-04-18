#include <time.h>
#include "RtcTime.h"


void SetYearAndDayOfYear(RtcTime * time)
{
	/* 	2008.12.31까지의 날수를 입력하고, 
		그 날수를 입력했을때, 2008.12.31일 나오는지 계산	*/
	struct tm firstDay_1980;
	firstDay_1980.tm_year = 1980 - 1900;
	firstDay_1980.tm_mon = 1 - 1;
	firstDay_1980.tm_mday = 1;
	firstDay_1980.tm_hour = 0;
	firstDay_1980.tm_min = 0;
	firstDay_1980.tm_sec = 0;
	firstDay_1980.tm_isdst = 0;
}

