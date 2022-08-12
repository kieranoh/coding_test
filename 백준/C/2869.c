#include <stdio.h>
#include <math.h>

int main()
{
	int high,mo,ni,sum;
	double count;
	scanf("%d %d %d",&mo,&ni,&high);
	count = ((double)(high - ni )) / ((double)(mo - ni)) ;
	count = ceil(count);
	printf("%.0f",count);
	return 0;
		
}
