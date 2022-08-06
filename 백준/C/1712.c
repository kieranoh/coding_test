#include <stdio.h>

int main()
{
	long long  basic, cost,sell,result = 0,target,flag = 0,temp;
	scanf("%d %d %d", &basic,&cost,&sell);
	if(sell <= cost)
	{
		printf("-1");
		return 0;
	}
	result = basic / (sell - cost);
	printf("%d",result + 1);
	
	return 0;
	
}
