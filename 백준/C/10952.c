#include <stdio.h>

int main()
{
	int num_1,num_2;
	while(1)
	{
		scanf("%d %d",&num_1,&num_2);
		if(num_1==0 && num_2==0)
		{
			break;
		}
		printf("%d\n",num_1 + num_2);
	}
	return 0;
}
