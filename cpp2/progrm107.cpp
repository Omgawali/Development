//circular LL in cpp


#include<iostream>

using namespace std;

struct node
{
	int data;
	struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

class SinglyCLL
{
	private:                         //characteristic
	    PNODE Head;
		PNODE Tail;
	
	public:                         //behaviourr
	    SinglyCLL();
		void InsertFirst(int no);
		void InsertLast(int no);
		void InsertAtPos(int no,int ipos);
		void DeleteFirst();
		void DeleteLast();
		void DeleteAtPos(int ipos);
		void Display();
 		int Count();
};
         
		SinglyCLL::SinglyCLL()
		{
			Head=NULL;
			Tail=NULL;
		} 
	    void SinglyCLL::InsertFirst(int no)
	    {
			PNODE newn=NULL;
			
			newn=new NODE;
			newn->data=no;
			newn->next=NULL;
			
		   if((Head==NULL)&&(Tail==NULL))        //if LL is empty 
		   {
			   Head=newn;
			   Tail=newn;
		   }
		   else                                   //if LL contains one node
		   {
			newn->next=Head;
			Head=newn; 
		   }   
		   Tail->next=Head;
		}

    	void SinglyCLL::InsertLast(int no)
		{
			PNODE newn=NULL;
			
			newn=new NODE;
			newn->data=no;
			newn->next=NULL;
			
		   if((Head==NULL)&&(Tail==NULL))        //if LL is empty 
		   {
			   Head=newn;
			   Tail=newn;
		   }
		   else                                   //if LL contains one node
		   {
			   Tail->next=newn;
			   Tail=newn;
		   }   
		   
		   Tail->next=Head;			
		}
		
		void SinglyCLL::InsertAtPos(int no,int ipos)
		{
			int iSize=Count();
			
			if((ipos<1)||(ipos>iSize+1)
			{
				cout<<"Invalid";
				return;
			}
			if(ipos==1)
			{
				InsertFirst(no);
			}
			else if(ipos==iSize+1)
			{
				InsertLast(no);
			}
			else
			{
				
			PNODE newn=NULL;
			
			newn=new NODE;
			newn->data=no;
			newn->next=NULL;
				PNODE temp1=Head;
				int iCnt=0;
				for(iCnt=1;iCnt<pos-1;iCnt++)
				{
					temp1=temp1->next;
				}
				newn->next=temp->next;
				temp->next=newn;
			}
		}
		void SinglyCLL::DeleteFirst()
		{
			if(Head==NULL && Tail==NULL)             //LL i\s empty
			{
				return ;
			}
			else if(Head==Tail)                       //LL 1 node
			{
				delete Head;
				Head=NULL;
				Tail=NULL;
			}
			else                              //LL conains more thjan one node 
			{
				Head=Head->next;
				delete Tail->next;
				Tail->next=Head;
			}
		
		}
		void SinglyCLL::DeleteLast()
		{
			if(Head==NULL && Tail==NULL)             //LL i\s empty
			{
				return ;
			}
			else if(Head==Tail)                       //LL 1 node
			{
				delete Head;
				Head=NULL;
				Tail=NULL;
			}
			else                              //LL conains more thjan one node 
			{
				PNODE temp=Head;
				while(temp->next!=Tail)
				{
					temp=temp->next;
				}
				delete Tail;
				Tail=temp;
				
				Tail->next=Head;
			}
		}
		void SinglyCLL::DeleteAtPos(int ipos)
		{
			int iSize=Count();
			
			if((ipos<1)||(ipos>iSize)
			{
				cout<<"Invalid";
				return;
			}
			if(ipos==1)
			{
				DeleteFirst();
			}
			else if(ipos==iSize)
			{
				DeleteLast();
			}
			else
			{
				PNODE temp1=Head;
				int iCnt=0;
				for(iCnt=1;iCnt<pos-1;iCnt++)
				{
					temp1=temp1->next;
				}
				PNODE temp2=temp1->next;
				temp1->next=temp2->next;
				delete temp2;
			}
		}
		void SinglyCLL::Display()
		{
			PNODE temp=Head;
			/*
			while(temp!=Tail)
			{
				cout<<"|"<<temp->data<<"|->";
				temp=temp->next;
			}
			cout<<"|"<<temp->data<<"|->";	
			*/
			if(Head==NULL && Tail==NULL)        //if LL is empty
			{
				return;
			}
			do
			{
				cout<<"|"<<temp->data<<"|->";
				temp=temp->next;
			}while(temp!=Head);
			cout<<endl;
		}
		
 		int SinglyCLL::Count()
		{
			
			PNODE temp=Head;
		
			int iCnt=0;
			if(Head==NULL && Tail==NULL)        //if LL is empty
			{
				return 0;
			}
			do
			{
				iCnt++;
				temp=temp->next;
			}while(temp!=Head);
			return iCnt;
		}

int main()
{
	SinglyCLL obhj;
	
	obhj.InsertFirst(51);
	obhj.InsertFirst(21);
	obhj.InsertFirst(11);
	obhj.InsertLast(101);
    
	obhj.InsertLast(111);	
	obhj.InsertLast(121);
	obhj.InsertLast(151);
	obhj.InsertLast(201);	
	
	obhj.Display();
	int Ret=obhj.Count();
	cout<<"node is"<<Ret<<endl;
	
	obhj.InsertAtPos(75,4);

	
	obhj.Display();
	Ret=obhj.Count();
	cout<<"node is"<<Ret<<endl;
	
	obhj.DeleteAtPos(4);
		
		obhj.Display();
	Ret=obhj.Count();
	cout<<"node is"<<Ret<<endl;
	return 0;
}