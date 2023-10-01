#include <stdio.h>
#include <string.h>


typedef struct {
	int arr[9999];
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
void pop(stack *s)
{
	if(s->top ==-1 )
	{
		printf("-1\n");
		return ;
	}
	printf("%d\n",s->arr[s->top--]);
	return ;
}
void size(stack *s)
{
	printf("%d\n",s->top+1);
	return ;
}
void empty(stack *s)
{
	if (s->top == -1)
	{
		printf("1\n");
		return;
	}
	else{
		printf("0\n");
		return ;
	}
	
}
void top(stack *s)
{
	if(s->top ==-1)
	{
		printf("-1\n");
		return;
	}
	printf("%d\n",s->arr[s->top]);
	return;
}
int main()
{
	stack s;
	init( &s);
	
	int test_c;
	char input[10];
	int num; 
	
	scanf("%d",&test_c);
	for(int i =0;i<test_c;i++)
	{
		scanf("%s",input);
		
		if(strcmp(input,"push")==0)
		{
		scanf("%d",&num);
		push(&s,num);
		}	
		else if(strcmp(input,"pop")==0)
		{
			pop(&s);
		}
		else if(strcmp(input,"size")==0)
		{
			size(&s);
		}
		else if(strcmp(input,"empty")==0)
		{
			empty(&s);
		}
		else if(strcmp(input,"top")==0)
		{
			top(&s);
		}
	}
	
	return 0;
}
