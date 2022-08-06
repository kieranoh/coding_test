#include <stdio.h>
#include <math.h>

int check (int num)
{
	if(num == 1)
	{
		return 0;
	}
	for(int i = 2; i <=sqrt(num); i++)
	{
		if(num % i == 0)
		{
			return 0;
		}
	}
	
	return 1;
}

int main()
{
	int n,count = 0,ans;
	scanf("%d",&n);
	int array[n];
	for(int i = 0; i<n; i++)
	{
		scanf("%d",&array[i]);
		ans = check(array[i]);
		if(ans == 1)
		{
			count+= 1;
		}
	}
	
	printf("%d",count);
	
	return 0;
}

