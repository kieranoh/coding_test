#include <stdio.h>

int main()
{
	int sum = 0;
	int num;
	for(int i = 0; i <5; i++)
	{
		scanf("%d",&num);
		if (num <40)
		{
			num = 40;
		}
		sum +=num;
	}
	printf("%d\n",sum/5);
}
