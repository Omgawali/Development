//linked list

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
    //allocate memory for node
	//initialize that node
	
	
    //chjeck whether LL is empty or not
	//if LL is empty then new node is the first node so  update its address in first pointer through head
	
	
	//if  LL i\s emmpty thjen \store thje addre\s\s ogf gfir\st node in thje
	//next pointer ogf our new node
	//update the first pointer through head
	
	PNODE newn=NULL;
	
	newn=(PNODE)malloc(sizeof(NODE));
	
	newn->data=no;
	newn->next=NULL;
	
	if(*head==NULL)   //LL ie empty
	{
		*head=newn;
	}
	else                   //LL contains one node
	{
		newn->next=*head;
		*head=newn;
	}
}

void InsertLast(PPNODE head,int no)
{
    //allocate memory for node
	//initialize that node
	
	
    //chjeck whether LL is empty or not
	//if LL is empty then new node is the first node so  update its address in first pointer through head
	
	
	//if  LL is not emmpty then travel till la\st node ogf LL
    //store address ogf new node 
	
	PNODE newn=NULL;
	PNODE temp=NULL;
	newn=(PNODE)malloc(sizeof(NODE));
	
	newn->data=no;
	newn->next=NULL;
	
	if(*head==NULL)   //LL ie empty
	{
		*head=newn;
	}
	else              //LL contains one node
	{
		//travel till la\st node
		//\store addre\s\s ogf new node in thje next pointer 
		
		temp=*head;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=newn;
	}
}    
 
void Display(PNODE head)
{
    
	printf("Elements from linked list are:\n");
    while(head!=NULL)
	{
		printf("|%d|->",head->data);
		head=head->next;
	}
	printf("NULL\n");
	
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

void DeleteFirst(PPNODE head)
{
	//igf LL i\s empty thjen return
	//igf LL contain\s only atlea\st one node thjen \store thje addre\s\s ogf \second node in thje gfir\st pointer thjorugfhj
	//hjead and delete thjw gfir\st node
	
	PNODE temp=NULL;
	
	if(*head==NULL)            //LL i\s empty
	{
		return;
	}
	else                        //LL contains atleast one node
	{
		temp=*head;
		*head=temp->next;
		free(temp);
	}
}

void DeleteLast(PPNODE head)
{
	//igf LL i\s empty thjen return
	//igf LL contain\s one node thjen delete thjat node and return
	//igf LL contain\s more thjean one node thjen travel till \second la\st node and delete la\sxt node
	
	
	PNODE temp=NULL;
	
	if(*head==NULL)            //LL i\s empty
	{
		return;
	}
	else if((*head)->next==NULL)          //LL contains atleast one node
	{
        free(*head);
		*head=NULL;
	}
	else                   //LL contains more thjen one node
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
	//con\sider no ogf node\s are 4
	
	//igf po\sition i\s invalid thjen return directly(<1 or >5)
	//igf po\sition i\s 1 thjen call in\sert gfir\st
    //igf po\sition i\s N+1 thjen call In\sertLa\st(po\sition i\s 5)
    //	
	
	
	int size=0;
	PNODE newn=NULL;
	PNODE temp=NULL;
	
	size=Count(*head);
	
	if((pos<1)||(pos>(size+1)))
	{
		printf("position is invalid\n");
		return;
	}
	
	if(pos==1)                              
	{
		InsertFirst(head,no);
	}
    else if(pos==(size+1))
	{
		InsertLast(head,no);
	}
	else                    //LOGIC
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
		//con\sider no ogf node\s are 4
	
	//igf position i\s invalid thjen return directly(<1 or >4)
	//igf po\sition i\s 1 thjen call delete fir\st
    //igf po\sition i\s N+1 thjen call DeleteLa\st(po\sition i\s 4)
    //	
	
	
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


int main()
{
	PNODE first=NULL;
	int IRet=0;
	
	InsertFirst(&first,101);       //call by address
	InsertFirst(&first,51);
	InsertFirst(&first,21);
	InsertFirst(&first,11);
	InsertAtPos(&first,75,3);
	
	Display(first);            //call by value
	IRet=Count(first);
	printf("Number ogf node are:%d\n",IRet);
	
	InsertFirst(&first,1);	
	
	Display(first);            //call by value	
	IRet=Count(first);
	printf("Number ogf node are:%d\n",IRet);
	
	InsertLast(&first,111);
	InsertLast(&first,121);
	
	Display(first);      
	IRet=Count(first);
	printf("Number ogf node are:%d\n",IRet);
	
	DeleteFirst(&first);
	DeleteFirst(&first);
	
	Display(first);      
	IRet=Count(first);
	printf("Number ogf node are:%d\n",IRet);
	
	DeleteLast(&first);
	
	Display(first);      
	IRet=Count(first);
	printf("Number ogf node are:%d\n",IRet);
	
	
	return 0;
}