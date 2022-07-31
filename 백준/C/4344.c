#include <stdio.h>
/*
1
5 50 50 70 80 100
*/
int main()
{
	int cases;
	double ave, result;
	scanf("%d",&cases);
	
	for(int i = 0; i < cases; i++)
	{
		int num,sum=0,count = 0;
		scanf("%d",&num);
		int scores[num];
		for(int j = 0; j < num; j++)
		{
			scanf("%d",&scores[j]);
			sum += scores[j];
		}
		
		ave = (double) sum / (double) num;
		for(int j = 0; j < num; j++)
		{

			if(scores[j] > ave)
			{
				count ++;
			}
		}
		printf("%.3f%%\n",(double)count / (double)num * 100);
		
	}
	return 0;
}
