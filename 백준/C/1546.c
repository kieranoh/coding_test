#include <stdio.h>
int main()
{
	int num,max = 0,input;
	double answer,total=0,temp;
	scanf("%d",&num);
	int arr[num];
	for (int i = 0; i<num;i++)
	{
		scanf("%d",&input);
		arr[i] = input;
		if (input > max)
		{
			max = input;
		}
	}
	for(int i = 0;i<num;i++)
	{
		total += ( (float)arr[i]/(float)max * 100);
	}
	printf("%lf",total/num);
	
}
