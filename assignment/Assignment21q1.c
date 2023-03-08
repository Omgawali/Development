
//reverse linked list

#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
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
	
	if(*head==NULL)          //igf LL i\s empty
	{
		*head=newn;
	}
	else                       //igf LL conatain\s one node
	{
		newn->next=*head;
		*head=newn;
	}
}


void Display(PNODE head)
{
	int iDigit=0,iRev=0;
    printf("Elements are there in linked list\n");
    while(head!=NULL && (head->data)>0)
	{
		iDigit=head->data%10;
		iRev=iRev*10+iDigit;
		head->data=head->data/10;
		printf("|%d|->",iRev);
		head=head->next;
	}		
}


int main()
{
	PNODE first=NULL;
	InsertFirst(&first,89);
	InsertFirst(&first,6);
	InsertFirst(&first,41);
	    InsertFirst(&first,17);
	InsertFirst(&first,28);
	InsertFirst(&first,11);
    
    
	Display(first);
	return 0;
}