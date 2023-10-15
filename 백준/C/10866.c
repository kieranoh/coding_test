#include <stdio.h>
#include <string.h>
#define SIZE 10000

typedef struct{
	int arr[SIZE];
	int front;
	int back;
}Deque;

void init(Deque *d)
{
	d->front = 0;
	d->back = 0;
	return;
}

int empty(Deque *d)
{
	return(d->front == d->back);
}


void push_front(Deque *d, int num)
{
	d->arr[d->front] = num;
	d->front = (d->front + SIZE -1) % SIZE;
	return;
}

void push_back(Deque *d, int num)
{
	d->back = (d->back +1) %SIZE;
	d->arr[d->back] = num;
	return;
}

int pop_front(Deque *d)
{
	if(empty (d))
	{
		return -1;
	}
	d->front = (d->front+1) %SIZE;
	int temp = d->arr[d->front];
	return temp;
}

int pop_back(Deque *d)
{
	if(empty (d))
	{
		return -1;
	}
	int temp = d->arr[d->back];
	d->back = (d->back + SIZE -1) %SIZE;
	
	return temp;
}

int size(Deque *d)
{
	return (d->back - d->front + SIZE )%SIZE;
}

int front(Deque *d)
{
	if(empty (d))
	{
		return -1;
	}
	int temp = (d->front+1)%SIZE;
	return d->arr[temp];
}

int back(Deque *d)
{
	if(empty (d))
	{
		return -1;
	}
	return d->arr[d->back];
}

int main()
{
	int Tc;
	int num;
	char input[12];
	Deque d;
	init(&d);
	
	scanf("%d",&Tc);
	
	for(int i = 0; i<Tc; i++)
	{
		scanf("%s",&input);
		if(strcmp(input,"push_front")==0)
		{
			scanf("%d",&num);
			push_front(&d,num);
		}
		else if(strcmp(input,"push_back")==0)
		{
			scanf("%d",&num);
			push_back(&d,num);
		}
		else if(strcmp(input,"pop_front")==0)
		{
			printf("%d\n",pop_front(&d));
		}
		else if(strcmp(input,"pop_back")==0)
		{
			printf("%d\n",pop_back(&d));
		}
		else if(strcmp(input,"size")==0)
		{
			printf("%d\n",size(&d));
		}
		else if(strcmp(input,"empty")==0)
		{
			printf("%d\n",empty(&d));
		}
		else if(strcmp(input,"front")==0)
		{
			printf("%d\n",front(&d));
		}
		else if(strcmp(input,"back")==0)
		{
			printf("%d\n",back(&d));
		}
	}
	return 0;
}
