#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node{
	struct Node *next;
	int data;
}Node;

typedef struct List{
	Node *head;
	Node *tail;
	Node *cur;
	Node *brefore;
}List;

void init(List *li)
{
	li->head = NULL;
	li->tail = NULL;
	li->cur = NULL;
	li->brefore = NULL;
	
}

void Insert_node(List *li, int num)
{
	Node *temp = (Node*)malloc(sizeof(Node));
	temp->data = num;
	
	if(li->head == NULL)
	{
		li->head = temp;
		li->tail = temp;
		temp->next = temp;
	}
	else
	{
		temp->next = li->tail->next;
		li->tail->next = temp;
		li->tail = temp;	
	}
}

void Cur_init(List *li)
{
	li->cur = li->tail;
	li->brefore = li->tail;
}

int Shift(List *li, int k)
{
	li->cur = li->cur->next;
	for(int i = 0; i <k-1;i++)
	{
		li->brefore = li->cur;
		li->cur = li->cur->next;
	}
	return li->cur->data;
}

void Remove_node(List *li)
{
	Node *temp = li->cur;
	if(temp == li->tail)
	{
		if(li->tail == li->tail->next)
		{
			li->head = NULL;
			li->tail = NULL;
		}
		else
		{
			li->tail = li->brefore;
		}
	}
	li->brefore->next = li->cur->next;
	li->cur = li->brefore;
	free(temp);
}


int main()
{
	int num, k;
	scanf("%d %d",&num,&k);
	
	List li;
	init(&li);
	
	for(int i = 1;i<=num;i++)
	{
		Insert_node(&li,i);
	}
	
	Cur_init(&li);
	
	printf("<%d",Shift(&li,k));
	Remove_node(&li);
	
	for (int i = 0;i<num-1;i++)
	{
	
		printf(", %d",Shift(&li,k));
		Remove_node(&li);	 
	}
	
	printf(">");
	return 0;
}
