#include <stdio.h>
#include <math.h>

int main()
{
	int start, end, len, min, sum, flag;
	sum = 0;
	len = 0;
	flag = 0;
	scanf("%d",&start);
	scanf("%d",&end);
	
	for (int i = start; i <= end; i++ )
	{
		if(find(i) != -1)
		{
			if (flag == 0)
			{
				min = i;
				flag = 1;
			}
			len +=1;
			sum+=i;
		}
	}
	if(len != 0)
	{
		printf("%d\n",sum);
		printf("%d",min);
	}
	else
	{
		printf("-1");
	}
	
}

int find(int num)
{
	if (num == 1 || num == 0)
	{
		return -1;
	}
	int det = sqrt(num);
	int i =2;
	while(i <= det)
	{
		if(num % i ==0)
		{
			return -1;
		}
		i++;
	}
	return num;
}
