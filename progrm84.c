//singly linear linked list
/*
   InsertFirst
   InsertLast
   InsertAtPosition
 
   DeleteFirst
   DeleteLast
   DeleteAtPosition
  
   Display
   Count

*/
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
 
 //juna naw       nawin naav
//struct node       NODE
//struct node *      PNODE
//struct node **     PPNODE
/*
   1.ALLOCATE MEMORY FOR NODE  
   2.INITIALI\SE THJE NODE
   3.CHJEHJCK WHJETHJER LL I\S EMPTY OR NOT 
   4.IGF LL I\S EMPTY THJ NEW NODE I\S  THE GFIR\ST   
   5.

*/


void InsertFirst(PPNODE Head,int iNo)
{
  PNODE newn=NULL;
  
  newn=(PNODE)malloc(sizeof(NODE));  
  
  newn->data=iNo;
  newn->next=NULL;
  
  if(*Head==NULL)     //IF LL IS EMPTY
  {
	  *Head=newn;
  }
  else   //IF LL CONTAINS ATLEAST ONE NODE
  {
	  newn->next=*Head;
	  *Head=newn;
  }
}
void Display(PNODE Head)
{
	printf("\n");
	while(Head!=NULL) 
	{
		printf("%d\t",Head->data);
		Head=Head->next;
	}
	
}

int main()
{
	PNODE First=NULL; 
	
	InsertFirst(&First,101);  //insert(60,101)
	InsertFirst(&First,51);    //insert(60,51)
	InsertFirst(&First,21);
	InsertFirst(&First,11);
	
	Display(First);
	return 0;
}

/*  
   RULES
    
	1.USE ONLY MALLOC
	2.DONT WRITE ANY TECHNICAL SYNTAX IN MAIN
	3.DONT USE ANY GLOBAL VARIABLE
    4.BE CAREFUL WHILE MANIPULATING FIRST POINTER
	5.PASS THE FIRST POINTER DIRECTLY IF THE FUNCTION IS GOING TO MODIFY THE LL. (DISPLAY,COUNT)
	6.PASS THE FIRST POINTER DIRECTLY IF THE FUNCTION IS GOING TO MODIFY THE LL. ()

*/