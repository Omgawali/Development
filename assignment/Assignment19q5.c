

#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node * next;
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
	if(*head==NULL)
	{
		*head=newn;
	}
	else
	{
		newn->next=*head;
		*head=newn;
	}
}

void Display(PPNODE head)
{
	PNODE temp=NULL;
	temp=*head;
	printf("Elemnts are there in linked list\n");
	while(head!=NULL)
	{
			printf("|%d|->",head->data);
		if(head->data<head)
		{
	        
		}
		head=head->next;
	
	}
}
int main()
{
    PNODE first=NULL;
	InsertFirst(&first,640);
	InsertFirst(&first,240);
	InsertFirst(&first,20);
	InsertFirst(&first,230);
	InsertFirst(&first,110);

    
    
	Display(&first);
    return 0;
}