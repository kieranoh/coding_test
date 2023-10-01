#include <stdio.h>

typedef struct {
	int arr[100000];
	int top;
}stack;

void init(stack* s)
{
	s->top = -1;
}
void push(stack *s,int num)
{
	s->top++;
	s->arr[s->top] = num;
	return;
}
int pop(stack *s)
{
	if(s->top ==-1 )
	{
		return 0;
	}
	return s->arr[s->top--];
}
int sum(stack *s)
{
	int result=0;
	if(s->top==-1)
	{
		return 0;
	}
	for(int i = 0; i<=s->top;i++)
	{
		result +=s->arr[i];
	}
	return result;
}
int main()
{
	stack s;
	init(&s);
	int tc, input,result;
	scanf("%d",&tc);
	for(int i=0;i<tc;i++)
	{
		scanf("%d",&input);
		if(input ==0)
		{
			pop(&s);
		}
		else
		{
			push(&s,input);
		}
	}
	result = sum(&s);		
	printf("%d\n",result);
	return 0;
}
