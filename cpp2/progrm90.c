//doubly linnked list

#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
	struct node *prev;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE head,int no)
{
	PNODE newn=NULL;
	newn=(PNODE)malloc(sizeof(NODE));
	
	newn->data=no;
	newn->next=NULL;
	newn->prev=NULL;
	
	if(*head==NULL)
	{
		*head=newn;
	}
	else
	{
		newn->next=*head;
		(*head)->prev=newn;
		*head=newn;
	}
}

void InsertLast(PPNODE head,int no)
{
	PNODE newn=NULL;
	PNODE temp=NULL;
	
	newn=(PNODE)malloc(sizeof(NODE));
	newn->data=no;
	newn->next=NULL;
	newn->prev=NULL;
	
	if(*head==NULL)
	{
		*head=newn;
	}
	else
	{
		temp=*head;
		while(newn->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=newn;
		newn->next=temp;
	}
}


void DeleteFirst(PPNODE head)
{
	if(*head==NULL)
	{
		return;
	}
	
	if((*head)->next==NULL)
	{
		free(*head);
		*head=NULL;
	}
	else
	{
		*head=((*head)->next);
	    free((*head)->prev);
		(*head)->prev=NULL;
	}
}

void DeleteLast(PPNODE head)
{
	PNODE temp=NULL;
	
	if(*head==NULL)
	{
		return;
	}
	
	if((*head)->next==NULL)
	{
		free(*head);
		*head=NULL;
	}
}

void InsertAtPosition(PPNODE head,int no,int pos)
{}

void DeleteAtPosition(PPNODE head,int pos)
{}

void Display(PNODE head)
{
	printf("data from linkedlist\n");
	while(head!=NULL)
	{
		printf("|%d|<=>",head->data);
		head=head->next;
	}
}
int Count(PNODE head)
{
	int iCnt=0;
	while(head!=NULL)
	{
		iCnt++;
		head=head->next;
	}
	return iCnt;
}
int main()
{
	
	return 0;
}