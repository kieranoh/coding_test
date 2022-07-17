#include<stdio.h>
int main()
{
	int num_1,num_2,output_1,output_2,output_3,answer;
	scanf("%d",&num_1);
	scanf("%d",&num_2);
	
	output_1 = num_1 * (num_2 % 10);
	printf("%d\n",output_1);
	
	output_2 = num_1 * ((num_2 / 10) % 10);
	printf("%d\n",output_2);
	
	output_3 = num_1 * (num_2 / 100);
	printf("%d\n",output_3);
	
	answer = num_1 * num_2;
	printf("%d",answer);
	
}
