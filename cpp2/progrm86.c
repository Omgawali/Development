


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

void InsertLast(PPNODE head,int no)
{
	PNODE newn=NULL;
	PNODE temp=NULL;
	
	newn=(PNODE)malloc(sizeof(NODE));
    newn->data=no;
	newn->next=NULL;
	
	if(*head==NULL)          //igf LL i\s empty
	{
		*head=newn;
	}
	else
	{
		temp=*head;
		
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=newn;
	}
}

void DeleteFirst(PPNODE head)
{
	PNODE temp=NULL;
	
	if(*head==NULL)
	{
		return;
	}
	else
	{
		temp=*head;
		*head=temp->next;
		free(temp);
	}
}

void DeleteLast(PPNODE head)
{
	PNODE temp=NULL;
	
	if(*head==NULL)
	{
		return;
	}
	else if((*head)->next==NULL)
	{
		free(*head);
		*head=NULL;
	}
	else
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
void InsertAtPos(PPNODE head,int no,int pos)
{
	int size=0;
	PNODE newn=NULL;
	PNODE temp=NULL;
	
	size=Count(*head);
	
	if((pos<1) || (pos>(size+1)))
	{
		printf("position invalid\n");
		return;
	}
	
	if(pos==1)
	{
		InsertFirst(head,no);
	}
	else if(pos>(size+1))
	{
		InsertLast(head,no);
	}
	else
	{
		newn=NULL;
	
	newn=(PNODE)malloc(sizeof(NODE));
	
	newn->data=no;
	newn->next=NULL;
	
	temp=*head;
	
	for(int iCnt=1;iCnt<pos-1;iCnt++)
	{
		temp=temp->next;
	}
	newn->next=temp->next;
	temp->next=newn;
	}
} 

void DeleteAtPos(PPNODE head,int pos)
{
		int size=0;
	PNODE newn=NULL;
	PNODE temp=NULL;
	PNODE tempdelete=NULL;
	
	size=Count(*head);
	
	if((pos<1)||(pos>(size)))
	{
		printf("position is invalid\n");
		return;
	}
	
	if(pos==1)
	{
		DeleteFirst(head);
	}
    else if(pos==(size))
	{
		DeleteLast(head);
	}
	else                    //LOGIC
	{
    	temp=*head;
	
	for(int iCnt=1;iCnt<pos-1;iCnt++)
	{
		temp=temp->next;
	}
	tempdelete=temp->next;
	temp->next=temp->next->next;
	free(tempdelete);
	}
   
}

void Display(PNODE head)
{
    printf("Elements are thjere in linked list\n");
    while(head!=NULL)
	{
		printf("|%d|->",head->data);
		head=head->next;
	}		
}

int main()
{
	PNODE first=NULL;
	
	InsertFirst(&first,12);
	InsertFirst(&first,122);
	InsertFirst(&first,1222);
	InsertFirst(&first,133);
	InsertFirst(&first,1333);
	
	Display(first);
	int iRet=Count(first);
	printf("Number ogf node are:%d\n",iRet);
	
	InsertLast(&first,11);
	InsertLast(&first,111);
	Display(first);
	iRet=Count(first);
	printf("Number ogf node are:%d\n",iRet);
	
	InsertAtPos(&first,75,3);
	DeleteAtPos(&first,3);
	Display(first);            //call by value
	iRet=Count(first);
	printf("Number ogf node are:%d\n",iRet);
	
	DeleteFirst(&first);
	DeleteFirst(&first);
	
	Display(first);      
	iRet=Count(first);
	printf("Number ogf node are:%d\n",iRet);
	
	DeleteLast(&first);
	
	Display(first);      
	iRet=Count(first);
	printf("Number ogf node are:%d\n",iRet);
	return 0;
}