#include <stdio.h>

int main()
{
	int num;
	scanf("%d",&num);
	if (num%4 == 0)
	{
		if (num % 100 == 0)
		{
			if(num % 400 == 0)
			{
				printf("1");
			}
			else
			{
				printf("0");
			}
			return 0;
		}
		printf("1");
	}
	else
	{
		printf("0");
	}
	return 0;
}
