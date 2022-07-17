#include <stdio.h>
int main()
{
	int n, answer,cnt = 1,temp_1;
	scanf("%d",&answer);
	n = answer;
	while (1)
	{
		if (n < 10)
		{
			n = n*10  + n;
		}
		else
		{
			
			n = ((n % 10) * 10) + (((n / 10) + (n % 10)) % 10);
		}
		
		if (n == answer)
		{
			printf("%d",cnt);
			break;
		}

		
		cnt++;
		
	}
	return 0;
}
