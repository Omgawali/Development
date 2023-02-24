
#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
	struct node *prev;              //*
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
	newn->prev=NULL;         //*
	  
	if(*head==NULL)         //if LL is empty
	{
		*head=newn;
	}
	else                       //LL conatin\s one node
	{
		newn->next=*head;
		(*head)->prev=newn;
		*head=newn;
	}
	
}

void Display(PNODE head)
{
	printf("Data from linked list\n");
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

void InsertLast(PPNODE head,int no)
{
	PNODE newn=NULL;
	PNODE temp=NULL;
	newn=(PNODE)malloc(sizeof(NODE));
	
	newn->data=no;
	newn->next=NULL;
	newn->prev=NULL;         //*
	  
	if(*head==NULL)         //if LL is empty
	{
		*head=newn;
	}
	else                   //LL conatin\s one node
	{
		temp=*head;
	    while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=newn;
		newn->next=temp;               //temp->next->prev=temp;
	}
} 

void DeleteFirst(PPNODE head)
{
	if(*head==NULL)         //LL i\s empty
	{
		return;
	}
	
	if((*head)->next==NULL)          //single node
	{
	    free(*head);	
		*head=NULL;
	}
	else                          //more then one node
	{
		*head=((*head)->next);          //*
		free((*head)->prev);          //*
		(*head)->prev=NULL;            //*
	}
}

void DeleteLast(PPNODE head)
{
	PNODE temp=NULL;
	
	if(*head==NULL)         //LL i\s empty
	{
		return;
	}
	
	if((*head)->next==NULL)          //single node
	{
	    free(*head);	
		*head=NULL;
	}
	else                          //more then one node
	{
		temp=*head;
		
		while(temp->next->next!=NULL)
		{
			temp=temp->next;
		}
		free(temp->next);
		temp->next=NULL;
	}
}

void InsertAtPos(PPNODE head,int no,int pos)
{
	PNODE temp=NULL;
	PNODE newn=NULL;
	int size=0;
	size=Count(*head);
	
	if((pos<1)||(pos>(size+1)))
	{
		printf("Invalid position");
		return;
	}

	if(pos==1)
	{
		InsertFirst(head,no);
	}
	else if(pos==size+1)
	{
		InsertLast(head,no);
	}
	else
	{
		temp=*head;
		newn=(PNODE)malloc(sizeof(NODE));
    
	newn->data=no;
	newn->next=NULL;
	newn->prev=NULL; 
	
	for(int iCnt=1;iCnt<(pos-1);iCnt++)
	{
		temp=temp->next;
	}
	newn->next=temp->next;
	temp->next->prev=newn;       //*
	temp->next=newn;
	newn->prev=temp;             //*
	}	
}

void DeleteAtPos(PPNODE head,int pos)
{
	PNODE temp=NULL;
	
	int size=0;
	size=Count(*head);
	
	if((pos<1)||(pos>(size)))
	{
		printf("Invalid position");
		return;
	}
	
	if(pos==1)
	{
		DeleteFirst(head);
	}
	else if(pos==size)
	{
		DeleteLast(head);
	}
	else
	{
		temp=*head;
	
	for(int iCnt=1;iCnt<(pos-1);iCnt++)
	{
		temp=temp->next;
	}
	 temp->next=temp->next->next;
	 free(temp->next->prev);       //*
	 temp->next->prev=temp;        //*
	}
}

int main()
{
	PNODE first=NULL;
	int ret=0;
	InsertFirst(&first,21);
	InsertFirst(&first,11);
	InsertFirst(&first,51);
	InsertFirst(&first,101);
	
	
	Display(first);
	ret=Count(first);
	
	printf("node are%d\n ",ret);
	InsertAtPos(&first,75,3);
		Display(first);

	DeleteAtPos(&first,3);
	Display(first);	
	DeleteFirst(&first);
	DeleteLast(&first);
		
	Display(first);
	ret=Count(first);
	
	printf("node are%d\n ",ret);
	
	return 0;
}    