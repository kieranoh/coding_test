#include <stdio.h>
#include <string.h>

typedef struct {
	int arr[10000];
	int front;
	int back;
}Queue;

int init(Queue *q)
{
	q->front=0;	
	q->back=0;
}

void push(Queue *q, int num)
{
	q->arr[q->back++] = num;
	
}

int pop(Queue *q)
{
	if(empty(q)==1)
	{
		return -1;
	}
	return q->arr[q->front++];
}

int size(Queue *q)
{
	return q->back - q->front;
}

int empty(Queue *q)
{
	if(q->front==q->back)
	{
		return 1;
	}
	return 0;
}

int front(Queue *q)
{
	if(empty(q)==1)
	{
		return -1;
	}
	return q->arr[q->front];
}

int back(Queue *q)
{
	if(empty(q)==1)
	{
		return -1;
	}
	return q->arr[q->back-1];
}
int main()
{
	Queue q;
	int tc,num;
	char input[7];
	int result;
	init(&q);
	
	scanf("%d",&tc);
	for(int i = 0; i<tc;i++)
	{
		scanf("%s",&input);
		if(strcmp(input,"push")==0)
		{
			scanf("%d",&num);
			push(&q,num);
		}
		else if(strcmp(input,"pop")==0)
		{
			result = pop(&q);
			printf("%d\n",result);
		}
		else if(strcmp(input,"size")==0)
		{
			result = size(&q);
			printf("%d\n",result);
		}
		else if(strcmp(input,"empty")==0)
		{
			result = empty(&q);
			printf("%d\n",result);
		}
		else if(strcmp(input,"front")==0)
		{
			result = front(&q);
			printf("%d\n",result);
		}
		else if(strcmp(input,"back")==0)
		{
			result = back(&q);
			printf("%d\n",result);
		}
	}
	return 0;
}
