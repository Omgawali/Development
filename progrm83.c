

#include<stdio.h>
#include<stdlib.h>



//structure declaration
struct node 
{
	int data;
	struct node *next; 
}; 

typedef struct node NODE;
typedef struct node * PNODE; 
typedef struct node ** PPNODE;
//hjuna naw       nawin naav
//struct node       NODE
//struct node *      PNODE
int main()
{
	//static memory 
	NODE obhj;
	
	//dynamic memmory alloc
    PNODE ptr=(PNODE)malloc(sizeof(NODE));	
	
	obhj.data=11;          //direct accessingf 
	obhj.next=NULL;
	
	ptr->data=11;          //indirect accessing
	ptr->next=NULL;
	
	return 0;
}