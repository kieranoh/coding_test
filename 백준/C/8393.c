# include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	if (a%2 == 1)
	{
		int answer = (a+1)*(a/2) + ((a+1)/2);
		printf("%d",answer);
	}
	else
	{
		int answer = (a+1)*(a/2);
		printf("%d",answer);
	}
}
