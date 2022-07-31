#include <stdio.h>
//greedy
int main()
{
	int total,result = 0;
	scanf("%d",&total);
	
	while(total > 0)
	{
		if(total %5 == 0)
		{
			result += total/5;
			total = 0;
		}
		else
		{
			total -=3;
			result ++;
			
		}
	}
	if(total < 0)
	{
		printf("-1");
	}
	else
	{
		printf("%d",result);
	}
	return 0;
	
	
 } 
