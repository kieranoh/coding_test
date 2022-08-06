#include <stdio.h>

int main()
{
	int input, result = 1,check = 1;
	scanf("%d",&input);
	while(1)
	{
		if(input <= check)
		{
			break;
		}
		input -= check;
		check = result *6 ;
		result +=1;
	}
	printf("%d",result);
	return 0;
}
