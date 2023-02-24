//Doubly linear linkedlist

#include<iostream.h>

using namespace std;
#define TRUE 1
#define FALSE 0

typedef int BOOL;

struct node 
{
	int Data;
	node *Next;
	node *Prev;
};

typedef struct node NODE;
typedef struct node * PNODE;

class Doubly_linkedlist
{
	private:
	PNODE Head;
	
	public:
	Doubly_linkedlist();
	~Doubly_linkedlist();
	BOOL InsertFirst(int);
	BOOL InsertLast(int);
	BOOL InsertAtPosition(int,int);
	inline void Display();
	inline int Count();
	BOOL DeleteFirst();
	BOOL DeleteAtPosition();
	BOOL DeleteLast();
};

Doubly_linkedlist::Doubly_linkedlist()
{
	Head=NULL;
}

Doubly_linkedlist::~Doubly_linkedlist()
{
	PNODE Temp=Head;
	if(Head!=NULL)
	{
		while(Head!=NULL)
		{
			Head=Head->Next;
			delete Temp;
			Temp=Head;
		}
	}
}
BOOL Doubly_linkedlist::InsertFirst(int no)
{
	PNODE Temp=Head;
	
	newn=new NODE;
	if(newn==NULL)
	{
		return FALSE;
	}
	
	newn->Next=NULL;
	newn->Prev=NULL;
	newn->Data=no;
	
	if(Head==NULL)
	{
		Head=newn;
	}
	else
	{
		Head->Prev=newn;
		newn->Next=Head;
		Head=newn;
	}
	
	return TRUE;
}

BOOL Doubly_linkedlist::InsertLast(int no)
{
	PNODE newn=NULL,temp=Head;
	newn=new NODE;
	
	If(newn==NULL)
	{
		return FALSE;
	}
	
	newn->Next=NULL;
	newn->Prev=NULL;
	newn->Data=no;
	
	if(Head==NULL)
	{
		Head=newn;
	}
	else
	{
		while(temp->Next!=NULL)
		{
			temp=temp->Next;
		}
		
		temp->Next=newn;
		newn->Prev=temp;
	}
	return TRUE;
}

BOOL Doubly_linkedlist::InsertAtPostion(int no,int pos)
{
	if((Head==NULL)||(pos>Count()+1)||(pos<=0))
	{
		return FALSE;
	}
	
	if(pos==1)
	{
		return(InsertFirst(no));
	}
	else if(pos==(Count())+1)
	{
		return(InsertLast(no));
	}
	else
	{
		PNODE newn=NULL,temp=Head;
		
		newn=new NODE;
		if(newn==NULL)
		{
			return FALSE;
		}
		newn->Next=NULL;
		newn->Prev=NULL;
		newn->Data=no;
		
		for(int i=1;i<=(pos-2);i++)
		{
			temp=temp->Next;
		}
		
		newn->Next=temp->Next;
		temp->Next->Prev=newn;
		newn->Prev=temp;
		temp->Next=newn;
	}
	return TRUE;
}

BOOL Doubly_linkedlist::DeleteFirst()
{
	PNODE temp=Head;
	
	if(Head==NULL)
	{
		return FALSE;
	}
	else if(Head->Next==NULL)	
	{
		delete Head;
		Head=NULL;
	}
	else
	{
		PNODE temp=Head;
		
		while(temp->Next!=NULL)
		{
			temp=temp->Next;
		}
       temp->Prev->Next=NULL;
	   delete temp;
	}
	return TRUE;
}

BOOL Doubly_linkedlist::DeleteAtPosition(int pos)
{
	if((Head==NULL)||(pos>Count())||(pos<=0))
	{
		return FALSE;
	}
	else if(pos==1)
	{
		DeleteFirst();
	}
	else if(pos==(Count()))
	{
		DeleteLast();
	}
	else
	{
		PNODE temp=Head;
		
		for(int i=1;i<=(pos-2);i++)
		{
			temp=temp->Next;
		}
		temp->Next=temp-Next->Next;
		delete temp->Next->Prev;
		temp->Next->Prev=temp;
	}
	return TRUE;
}

void Doubly_linkedlist::Display()
{
	PNODE temp=Head;
	
	while(temp!=NULL)
	{
		cout<<Temp->Data<<"->";
		Temp=Temp->Next;	
	}
	cout<<"NULL\n";
}

int Doubly_linkedlist::Count()
{
	PNODE Temp=Head;
	int iCnt=0;
	
	while(Temp!=NULL)
	{
		iCnt++;
		Temp=Temp->Next;
	}
	return iCnt;
}

int main()
{
	Doubly_linkedlist obhj1;
	Doubly_linkedlist *obhj2=new Doubly_linkedlist();
	
	obhj1.InsertFirst(21);
	obhj1.InsertFirst(11);
	
	obhj1.Display();
	
	cout<<"\nNumber of nodes: "<<obhj1.Count()<<"\n";
	
	obhj1.InsertFirst(101);
	obhj1.InsertFirst(111);
    
	obhj1.Display();
	
	cout<<"\nNumber of nodes: "<<obhj1.Count()<<"\n";
	
	obhj1.InsertAtPosition(75.4);
	obhj1.InsertAtPosition(85.4);

    obhj1.Display();
	
	cout<<"\nNumber of nodes: "<<obhj1.Count()<<"\n";
	
	obhj1.DeleteFirst();
    obhj1.Display();
	
	obhj1.DeleteLast();
    obhj1.Display();
	
	obhj2->InsertFirst(501);
	obhj2->InsertFirst(511);
	obhj2->InsertFirst(521);
	
	obhj2->Display();
	
	obhj2->InsertLast(551);
	obhj2->InsertAtPosition(601,3);
	obhj2->Display();
	
	cout<<"\nNumber of nodes:"<<obhj2->Count()<<"\n";
	delete obhj2;
	
	return 0;
}