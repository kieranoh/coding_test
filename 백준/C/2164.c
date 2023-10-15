#include <stdio.h>
#define SIZE 500001

typedef struct {
	int arr[SIZE];
	int front;
	int back;
}Queue;

void init(Queue *q)
{
	q->front=0;	
	q->back=0;
}

int is_empty(Queue *q)
{
	return (q->front == q->back);
}

void push(Queue *q, int num)
{
	q->back = (q->back+1)%SIZE;
	q->arr[q->back] = num;
	
}

int pop(Queue *q)
{
	q->front = (q->front+1)%SIZE;
	return q->arr[q->front];
}

int main()
{
	Queue q;
	init(&q);
	int num;
	scanf("%d",&num);
	int temp;

	for(int i = 0;i<num;i++)
	{
		push(&q,i+1);
		
	}
	while (!is_empty(&q))
	{
		temp = pop(&q);
		if(is_empty(&q))
		{
			break;
		}
		temp = pop(&q);
		push(&q,temp);
		
	}
	printf("%d",temp);
	
	return 0;
}
