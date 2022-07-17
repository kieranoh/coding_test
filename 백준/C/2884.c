#include <stdio.h>
int main()
{
	int hour, min;
	scanf("%d %d",&hour,&min);
	
	if (min < 45)
	{
		min = min + 15;
		if(hour > 0)
		{
			hour -=1;
		}
		else
		{
			hour = 23;
		}
	}
	else
	{
		min -= 45;
	}
	printf("%d %d",hour,min);
	return 0;
}
