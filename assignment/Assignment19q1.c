


#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

struct node
{
	int data;
	struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

int InsertFirst(PPNODE head,int no)
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
/*
int SearchFirstOccurance(PNODE head,int no)
{
	int iRet1=Count(head);
	int iCnt=0;
    PNODE newn1=NULL;
	
		newn1=(PNODE)malloc(sizeof(NODE));
	
	newn1->data=no;
	newn1->next=NULL;
    newn1=*head;
	for(int iCnt=1;iCnt<=iRet1;iCnt++)
	{  
       while(head!=NULL)
	   {
	  if(newn1->data==no)
      {
		break;
	  } 
	   }
	   head=head->next;
	}
	return iCnt;
}
*/
void Display(PNODE head)
{
	printf("Data from linked list\n");
	while(head!=NULL)
	{
		printf("|%d|->",head->data);
		head=head->next;
	}
}

int main()
{
    PNODE first=NULL;
	int iRet=0;
	int iValue=0;
	InsertFirst(&first,70);
	InsertFirst(&first,30);
	InsertFirst(&first,50);
	InsertFirst(&first,40);
	InsertFirst(&first,30);
	InsertFirst(&first,20);
	InsertFirst(&first,10);
     Display(first);
	printf("Enter element search\n");
    scanf("%d",iValue);
	//iRet=SearchFirstOccurance(first,iValue);
   
	return 0;
}

/*
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int SearchGFirstOccurance(int Arr[],int iLength,int iNo)
{
	int iCnt=0;
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt]==iNo)
		{
			break;
		}
	}
	if(iCnt==iLength)
	{
	    return -1;
	}
	else
	{
	    return iCnt;
	}
}

int main()
{
    int iSize=0,iCnt=0,iRet=0,iValue=0;

    int *ptr=NULL;	
	
	printf("Enter number of elements\n");
	scanf("%d",&iSize);
	
	ptr=(int *)malloc(sizeof(int)*iSize);
	
	printf("Enter the value\n");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	
    printf("Enter the element to search\n");
	scanf("%d",&iValue);
	
	iRet=SearchGFirstOccurance(ptr,iSize,iValue);
	if(iRet==-1)
	{
		printf("There is no such element\n");
	}
	else
	{
		printf("Elements first occured at :%d\n",iRet);
	}
	free(ptr);
	return 0;
}
*/