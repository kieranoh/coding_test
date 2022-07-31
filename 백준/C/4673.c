#include <stdio.h>

int check(int num)
{
	int result = num;
	while(num >0)
	{
		result += num%10;
		num/=10;
	}
	return result;
}

int main()
{
	int check_num;
	int result[10001] = {0,};
	for (int i = 0; i< 10001; i++)
	{
		check_num = check(i);
		if(check_num < 10001)
		{
			
			result[check_num] = 1;
		}
		
	}
	
	for (int i = 0; i< 10001; i++)
	{
		if(result[i] != 1 )
		{
			printf("%d\n",i);
		}
	}
	
	return 0;
}
