#include <stdio.h>

int main()
{
	int hour, min, time;
	scanf("%d %d\n%d", &hour, &min, &time);
	if(time >= 60)
	{
		hour += time/60;
		min = min + time % 60;
		

	}
	else
	{
		min += time;	
	}
	if (min >= 60)
	{
		hour++;
		min = min % 60;
	}
	
	if ( hour >= 24)
	{
		hour = hour % 24;
	}
	
	printf("%d %d",hour, min);
	
	return 0;
	
	

}
