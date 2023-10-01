#include <stdio.h>


void push(int stack[],int num,int *top)
{
	stack[*top] = num;
	*top = *top+1;
	return;
}
int pop(int *stack,int *top)
{
	if(*top ==0 )
	{
		return -1;
	}
	
	return stack[--*top];
}
int size(int *top)
{
	return *top;
}
int empty(int *top)
{
	if (*top == 0)
	{
		return 1;
	}
	else{
		return 0;
	}
	
}
int top_f(int *stack,int *top)
{
	if(*top ==0)
	{
		return -1;
	}
	return stack[*top-1];
}
int main()
{
	int top = 0;
	int stack[9999]={0};
	int num;
	
	int test_c;
	char input[10];
	
	scanf("%d",&test_c);
	for(int i =0;i<test_c;i++)
	{
		scanf("%s",input);
		
		if(input[0] == 'p'&&input[1] =='u')
		{
		scanf("%d",&num);
		push(stack,num,&top);
		}	
		else if(input[0] == 'p'&&input[1] =='o')
		{
			printf("%d\n",pop(stack,&top));
		}
		else if(input[0]=='s')
		{
			printf("%d\n",size(&top));
		}
		else if(input[0]=='e')
		{
			printf("%d\n",empty(&top));
		}
		else if(input[0]=='t')
		{
			printf("%d\n",top_f(stack,&top));
		}
	}
	
	return 0;
}
