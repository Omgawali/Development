//PPA chi punyayi
//menu driven application

#include<iostream>
using namespace std;

struct node  
{
	int data;
	struct node * next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

class SinglyCLL
{
	private:
	PNODE Head;
	PNODE Tail;
	
	public:
	SinglyCLL();
	void InsertFirst(int no);
	void InsertLast(int no);
	void InsertAtPos(int no,int pos);
	void DeleteFirst();
	void DeleteLast();
	void DeleteAtPos(int pos);
	void Display();
	int Count();
};
SinglyCLL::SinglyCLL()
{
	Head=NULL;
	Tail=NULL;
}

void  SinglyCLL::InsertFirst(int no)
{
	PNODE newn=NULL;
	newn=new NODE;
	newn->data=no;
	newn->next=NULL;
	
	if((Head==NULL)&&(Tail==NULL))
	{
		Head=newn;
		Tail=newn;
	}
	else
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
	
	if((Head==NULL)&&(Tail==NULL))
	{
		Head=newn;
		Tail=newn;
	}
	else
	{
		Tail->next=newn;
		Tail=newn;
	}
	Tail->next=newn;	
	}
	
	void SinglyCLL::InsertAtPos(int no,int pos)
	{
		int iSize=Count();
		if((pos<1)||(pos>iSize+1))
		{
			cout<<"Invalid position";
			return ;
		}
		
		if(pos==1)
		{
			InsertFirst(no);
		}
		else if(pos==iSize+1)
		{
			InsertLast(no);
		}
		else
		{
				
        	PNODE newn=NULL;
        	newn=new NODE;
        	newn->data=no;
        	newn->next=NULL;
			
			PNODE temp=Head;
			int iCnt=0;
			
			for(iCnt=1;iCnt<pos-1;iCnt++)
			{
				temp=temp->next;
			}
			
			newn->next=temp->next;
			temp->next=newn;
		}
	}
	
	
	void SinglyCLL::DeleteFirst()
	{
		if((Head==NULL)&&(Tail==NULL))
	{
		return;
	}
	else if(Head==Tail)                   //if LL contains one node
	{
		delete Head;
		Head=NULL;
		Tail=NULL;
	}
	else
	{
		Head=Head->next;
		delete Tail->next;
		Tail->next=Head;
	}
	}
	
	void SinglyCLL::DeleteLast()
	{
		if((Head==NULL)&&(Tail==NULL))
     	{
	     return;
	    }
    	else if(Head==Tail)
		{
			delete Tail;
			Head=NULL;
			Tail=NULL;
		}
		else
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
	void SinglyCLL::DeleteAtPos(int pos)
	{
		int iSize=Count();
		if((pos<1)||(pos>iSize))
		{
			cout<<"Invalid position";
			return;
		}
		
		if((pos==1))
		{
			DeleteFirst();
		}
		else if(pos==iSize)
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
		if(Head==NULL && Tail==NULL)
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
		int iCnt=0;
		PNODE temp=Head;
		
		if(Head==NULL && Tail==NULL)
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
	int iChoice=1;
	SinglyCLL obhj;
	int iValue=0,pos=0,iRet=0;
	
    while(iChoice!=0)
	{
		cout<<"Enter your choice:"<<endl;
		cout<<"1. Insert First:"<<endl;
		cout<<"2. Insert Last:"<<endl;
		cout<<"3.InsertAtPos:"<<endl;
		cout<<"4. Delete First:"<<endl;
		cout<<"5. Delete Last:"<<endl;
		cout<<"6.Delete At Pos:"<<endl;
		cout<<"7. Display the data:"<<endl;
		cout<<"8.Count number ogf elements:"<<endl;
		cout<<"9.Terminate the application:"<<endl;
		cin>>iChoice;
		
		switch(iChoice)
		{
			case 1:
			cout<<"Enter the value:"<<endl;
			cin>>iValue;
			obhj.InsertFirst(iValue);
			break;
			case 2:
			cout<<"Enter the value:"<<endl;
			cin>>iValue;
			obhj.InsertLast(iValue);
			break;
			case 3:
			cout<<"Enter the value:"<<endl;
			cin>>iValue;
			cout<<"Enter the pos:"<<endl;
			cin>>pos;			
			obhj.InsertAtPos(iValue,pos);
			break;
			case 4:
			
			obhj.DeleteFirst();
			break;
			case 5:
		
			obhj.DeleteLast();
			break;
			case 6:
			cout<<"Enter the Position:"<<endl;
			cin>>pos;
			obhj.DeleteAtPos(pos);
			
			break;
			case 7:

			obhj.Display();
			break;
			case 8:
			
			iRet=obhj.Count();
			cout<<"Number of elemnts:"<<iRet<<endl;
			
			break;
			case 9:
			cout<<"Thankyou:"<<endl;
			iChoice =0;
		
			break;	

			default:
			cout<<"Please enter proper choice:";
			break;
		}
	}
	return 0;
}