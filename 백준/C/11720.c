#include <stdio.h>
int main()
{
	int num,input,answer = 0;
	scanf("%d",&num);
	
	for(int i = 0; i < num; i++)
	{
		scanf("%1d",&input);
		answer += input;
		
	}
	printf("%d",answer);
	
	return 0;
}
