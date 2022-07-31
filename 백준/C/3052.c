#include <stdio.h>

int main()
{
	int idx = 0,input,flag = 0;
	int result[10];
	for(int i = 0; i<10; i++)
	{
		scanf("%d",&input);
		input %= 42;
		if (idx == 0)
		{
			result[idx] = input;
			idx++;
		}
		else
		{
			for(int j = 0; j < idx;j++)
			{
				if(input == result[j])
				{
					flag = 0;
					break;
				}
				flag = 1;
				
			}
			if(flag == 1)
			{
				result[idx] = input;
				idx++;
			}
			flag = 0;
		}
	}
	printf("%d",idx);
	return 0;
}
