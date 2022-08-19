#include <stdio.h>

int main()
{
	int num, i = 1,a;
	scanf("%d",&num);
	while(1)
	{
		if((i-1)*(i)/2 < num && num <= (i) * (i+1)/2)
		{
			break;
		}
		
		i++;
	}
	a = i*(i+1) / 2;
	if(i %2 == 0)
	{
		printf("%d/%d",i-(a-num), (a-num) +1);
	}
	else
	{
		printf("%d/%d", (a-num) +1,i-(a-num));
	}

	
	return 0;
}
