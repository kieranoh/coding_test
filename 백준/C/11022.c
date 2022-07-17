#include <stdio.h>
int main()
{
	int test,num_1,num_2;
	scanf("%d",&test);
	for(int i = 0; i<test;i++)
	{
		scanf("%d %d",&num_1,&num_2);
		printf("Case #%d: %d + %d = %d\n",i+1,num_1,num_2,num_1+num_2);
	}
	return 0;
}
