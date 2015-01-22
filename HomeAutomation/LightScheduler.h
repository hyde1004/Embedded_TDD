#ifndef	D_LightScheduler_H
#define	D_LightScheduler_H

enum Day
{
	NONE = -1, EVERYDAY = 10, WEEKDAY, WEEKEND,
	SUNDAY = 1, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY
};

typedef enum Day Day;

void LightScheduler_Create(void);
void LightScheduler_Destroy(void);
void LightScheduler_Wakeup(void);
void LightScheduler_ScheduleTurnOn(int id, Day day, int minuteOfDay);

#endif	/*	D_LightScheduler_H	*/