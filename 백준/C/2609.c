# include <stdio.h>

int main()
{
	int num_1, num_2, temp, Lcm;
	
	scanf("%d %d",&num_1,&num_2);
	Lcm = num_1 * num_2;
	if(num_1 < num_2)
	{
		temp = num_1;
		num_1 = num_2;
		num_2 = temp;
	}
	
	while(num_2!=0)
	{
		temp = num_1%num_2;
		num_1 = num_2;
		num_2 = temp;
		
	}
	Lcm /=num_1;
	printf("%d\n",num_1);
	printf("%d",Lcm);
	return 0;
}
