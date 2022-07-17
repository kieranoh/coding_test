#include <stdio.h>
int main()
{
	int arr[10] = {0};
	int a,b,c,answer;
	scanf("%d\n%d\n%d",&a,&b,&c);
	answer = a*b*c;
	
	for(int i = 1; i < answer; i= i*10)
	{
		arr[answer/i%10] +=1;
	}
	for(int i =0; i<10;i++)
	{

		printf("%d\n",arr[i]);
		
	}
	return 0;
}
