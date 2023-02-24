
///////////////////////////////////////////
//       Generic  Data  Structure
//
//
//
//
//
//
//////////////////////////////////////////////////

#include<iostream>
using namespace std;

template<class T>
struct node
{
	T data;
	struct node *next;
	struct node *prev; 
};

template<class T>
class SinglyLL
{
	public:
	struct node<T> *Head;
	int Count;
	
	SinglyLL();
	void InsertFirst(T);
	void InsertLast(T);
	void InsertAtPos(T,int pos);
	void DeleteFirst();
	void DeleteLast();
	void DeleteAtPos(int pos);
	void Display();
	int CountNode();
};


template<class T>
class DoublyLL
{
	public:
	struct node<T> *Head;
	int Count;
	
	DoublyLL();
	void InsertFirst(T);
	void InsertLast(T);
	void InsertAtPos(T,int pos);
	void DeleteFirst();
	void DeleteLast();
	void DeleteAtPos(int pos);
	void Display();
	int CountNode();
};


template<class T>
class SinglyCLL
{
	public:
	struct node<T> *Head;
	struct node<T> *Tail;
	int Count;
	
	SinglyCLL();
	void InsertFirst(T);
	void InsertLast(T);
	void InsertAtPos(T,int pos);
	void DeleteFirst();
	void DeleteLast();
	void DeleteAtPos(int pos);
	void Display();
	int CountNode();
};


template<class T>
class Queue
{
	public:
	struct node<T> *Head;
	int Count;
	
	Queue();

	void Enqueue(T);      //InsertLast
	void Dequeue();          //DeleteFirst 
	void Display();
	int CountNode();
};


template<class T>
class Stack
{
	public:
	struct node<T> *Head;
	int Count;
	
	Stack();
	void Push(T);      //InsertFirst
	void Pop();          //DeleteFirst 
	void Display();
	int CountNode();
};

   template<class T>
	SinglyCLL<T>::SinglyCLL()
	{
		Head=NULL;
		Tail=NULL;
	}
	
	template<class T>
	void SinglyCLL<T>::InsertFirst(T no)
	{
		struct node<T>* newn=NULL;
		newn=new node <T>;
		newn->data=no;
		newn->next=NULL;
		
		if(Head==NULL && Tail==NULL)
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
		Count++;
	}
	
	template<class T>
	void SinglyCLL<T>::InsertLast(T no)
	{
		struct node<T>* newn=NULL;
		newn=new node <T>;
		newn->data=no;
		newn->next=NULL;
		
		if(Head==NULL && Tail==NULL)
		{
			Head=newn;
			Tail=newn;
		}
		else
		{
			Tail->next=newn;
			Tail=newn;
		}
		Tail->next=Head;
		Count++;
	}
	
	template<class T>
	void SinglyCLL<T>::InsertAtPos(T no,int pos)
	{
		int size=Count();
		if((pos<1)||(pos>size+1))
		{
			cout<<"inavlid position"<<endl;
			return;
		}
		
		if(pos==1)
		{
			InsertFirst(no);
		}
		else if(pos==size+1)
		{
			InsertLast(no);
		}
		else
		{
			
		struct node<T>* newn=NULL;
		newn=new node <T>;
		newn->data=no;
		newn->next=NULL;
		
		struct node <T>* temp=Head;
	    int iCnt = 0;

		for(iCnt = 1; iCnt < pos-1; iCnt++)
		{
			temp = temp->next;
		}

		newn->next = temp -> next;
		temp->next = newn;
		Count--;
		}
	}
	
	template<class T>
	void SinglyCLL<T>::DeleteFirst()
	{
		if(Head==NULL && Tail==NULL)
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
			Head=Head->next;
			delete Tail->next;
			Tail->next=Head;
		}
		Count--;
	}
	template<class T>
	void SinglyCLL<T>::DeleteLast()
	{
		if(Head==NULL && Tail==NULL)
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
			struct node <T>* temp=Head;
			while(temp->next!=NULL)
			{
				temp=temp->next;
			}
			delete Tail;
			Tail=temp;
			Tail->next=Head;
		}
		Count--;
	}
	
	template<class T>
	void SinglyCLL<T>::DeleteAtPos(int pos)
	{
		int size=Count();
		if((pos<1)||(pos>size))
		{
			cout<<"inavlid position"<<endl;
			return;
		}
		
		if(pos==1)
		{
			DeleteFirst();
		}
		else if(pos==size)
		{
			DeleteLast();
		}
		else
		{
			struct node<T>* temp=Head;
			
			for(int iCnt=1;iCnt<pos-1;iCnt++)
			{
				temp=temp->next;
			}
			struct node<T>* temp1=NULL;
			temp1=temp->next;
			temp->next=temp1->next;
			delete temp1;
		}
		Count--;
	}
	
	template<class T>
	void SinglyCLL<T>::Display()
	{
		struct node <T>* temp=Head;
		
		do
		{
			cout<<"|"<<temp->data<<"|";
			temp=temp->data;
		}while(temp!=Head);
		
	cout<<endl;
	}
	
	template<class T>
	int SinglyCLL<T>::CountNode()
	{
	    return Count;
	}


template<class T>
Queue<T>::Queue()
{
	Head=NULL;
	Count=0;
}


template<class T>
void Queue<T>::Enqueue(T no)
{
	struct node <T>*newn=NULL;
	newn=new node<T>;
	newn->data=no;
	newn->next=NULL;
	
	if(Head==NULL)
	{
		Head=newn;
	}
	else
	{
		struct node <T> *temp=Head;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=newn;
		
	}
	Count++;
}

template<class T>
void Queue<T>::Dequeue()       //DeleteFirst
{
	T no;
	if(Count==0)
	{
		cout<<"Queue is empty"<<endl;
        return;
	}
	if(Count==1)
	{
		no=Head->data;
		delete Head;
		Head=NULL;

	}
	else
	{
		no=Head->data;
		struct node <T>* temp=Head;
		Head=Head->next;
		delete temp;
	   
	}
	 Count--;
	cout<<"Removed element is:"<<no<<endl;
}

template<class T>
void Queue<T>::Display()
{
	cout<<"Element from Queue:"<<endl;
	struct node<T> *temp=Head;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}

template<class T>
int Queue<T>::CountNode()
{
	return Count;
}


template<class T>
Stack<T>::Stack()
{
	Head=NULL;
	Count=0;
}

template<class T>
void Stack<T>::Push(T no)
{
	struct node <T>*newn=NULL;
	newn=new node<T>;
	newn->data=no;
	newn->next=NULL;
	
	newn->next=Head;
	Head=newn;
	
	Count++;
}

template<class T>
void Stack<T>::Pop()       //DeleteFirst
{
	T no;
	if(Count==0)
	{
		cout<<"Stack is empty"<<endl;
        return;
	}
	if(Count==1)
	{
		no=Head->data;
		delete Head;
		Head=NULL;

	}
	else
	{
		no=Head->data;
		struct node <T>* temp=Head;
		Head=Head->next;
		delete temp;
	   
	}
	 Count--;
	cout<<"Removed element is:"<<no<<endl;
}

template<class T>
void Stack<T>::Display()
{
	cout<<"Element from Stack:"<<endl;
	struct node<T> *temp=Head;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}

template<class T>
int Stack<T>::CountNode()
{
	return Count;
}


template<class T>
DoublyLL<T>::DoublyLL()
{
	Head=NULL;
    Count=0;
}

template<class T>
void DoublyLL<T>::InsertFirst(T no)
{
	struct node <T>*newn=NULL;
	newn=new node<T>;
	newn->data=no;
	newn->next=NULL;
	newn->prev=NULL;
	
	if(Head==NULL)
	{
		Head=newn;
	}
	else
	{
		newn->next=Head;
		Head->prev=newn;
		Head=newn;
	}
	Count++;
}
    template <class T>
	void DoublyLL<T>::InsertLast(T no)
	{
		struct node <T>* newn=NULL;
		newn=new node<T>;
		newn->data=no;
		newn->next=NULL;
		newn->prev=NULL;
		
		if(Head==NULL)
		{
			Head=newn;
		}
		else
		{
			struct node <T>* temp=Head;
			while(newn->next!=NULL)
			{
				temp=temp->next;
			}
			temp->next=newn;
			newn->next=temp;
		}
		Count++;
	}


template <class T>
void DoublyLL<T>::Display()
{
	cout<<"Data from LL "<<endl;

	struct node<T> *temp=Head;
	while(temp!=NULL)
	{
		cout<<" "<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}
template <class T>
void DoublyLL<T>::InsertAtPos(T no,int pos)
{
	struct node <T>* temp=NULL;
	int size=0;
	size=CountNode();
	
	if((pos<1)||(pos>size+1))
	{
		cout<<"Invalid position"<<endl;
		return ;
	}
	
	if(pos==1)
	{
		InsertFirst(no);
	}
	else if(pos==size+1)
	{
		InsertLast(no);
	}
	else
	{
		temp=Head;
		struct node <T>* newn=new node<T>;
		newn->data=no;
		newn->next=NULL;
		newn->prev=NULL;
		
		for(int iCnt=0;iCnt<pos-1;iCnt++)
		{
			temp=temp->next;
		}
		
		newn->next=temp->next;
		temp->next->prev=newn;
		temp->next=newn;
		newn->prev=temp;
	}
	Count++;
}

	template <class T>
	void DoublyLL<T>::DeleteFirst()
	{
		if(Head==NULL)
		{
			return;
		}
		
		if(Head->next==NULL)
		{
			delete Head;
			Head=NULL;
		}
		else
		{
			Head=Head->next;
			delete Head->prev;
			Head->prev=NULL;
		}
	}
	template <class T>
	void DoublyLL<T>::DeleteLast()
	{
		if(Head==NULL)
		{
			return;
		}
		
		if(Head->next==NULL)
		{
			delete Head;
			Head=NULL;
		}
		else
		{
			struct node <T>* temp=NULL;
			temp=Head;
			while(temp->next->next=NULL)
			{
				temp=temp->next;
			}
			delete temp->next;
			temp->next=NULL;
		}
	}
	
	template <class T>
	void DoublyLL<T>::DeleteAtPos(int pos)
	{
		int size=0;
		size=Count();
		if((pos<1)||(pos>size))
		{
			cout<<"Invalid position"<<endl;
			return;	
		}
		
		if(pos==1)
		{
			DeleteFirst();
		}
		else if(pos==size)
		{
			DeleteLast();
		}
		else
		{
			struct node <T>* temp=NULL;
			temp=Head;
			for(int iCnt=1;iCnt<(pos-1);iCnt++)
			{
				temp=temp->next;
			}	
			temp->next=temp->next->next;
			delete temp->next->prev;
			temp->next->prev=temp;
		}
	}
    
	template <class T>
	int DoublyLL<T>::CountNode()
	{
		return Count;
	}

template<class T>
SinglyLL<T>::SinglyLL()
{
	Head=NULL;
	Count=0;
}

template<class T>
void SinglyLL<T>::InsertFirst(T no)
{
	struct node <T>*newn=NULL;
	newn=new node<T>;
	newn->data=no;
	newn->next=NULL;
	
	if(Head==NULL)
	{
		Head=newn;
	}
	else
	{
		newn->next=Head;
		Head=newn;
	}
	Count++;
}


template<class T>
void SinglyLL<T>::InsertLast(T no)
{
	struct node <T>*newn=NULL;
	newn=new node<T>;
	newn->data=no;
	newn->next=NULL;
	
	if(Head==NULL)
	{
		Head=newn;
	}
	else
	{
		struct node <T> *temp=Head;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=newn;
		
	}
	Count++;
}

template<class T>
void SinglyLL<T>::InsertAtPos(T no,int pos)
{
	int size=0;
	struct node<T>* newn=NULL;
	struct node<T>*temp=NULL;
	
	size=CountNode();
	
	if((pos<1)||(pos>(size+1)))
	{
	    cout<<"invalidd"<<endl;
		return;
	}
	
	if(pos==1)
	{
		InsertFirst(no);
	}
	else if(pos>(size+1))
	{
		InsertLast(no);
	}
	else
	{
		newn=new node<T>;
		newn->data=no;
		newn->next=NULL;
		temp=Head;
		for(int iCnt=1;iCnt<pos-1;iCnt++)
		{
			temp=temp->next;
		}
		newn->next=temp->next;
		temp->next=newn;
	}

}

template<class T>
void SinglyLL<T>::Display()
{
	cout<<"Element from linked list:"<<endl;
	struct node<T> *temp=Head;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}

template<class T>
int SinglyLL<T>::CountNode()
{
	return Count;
}


template<class T>
void SinglyLL<T>::DeleteFirst()
{
	struct node <T>*temp=NULL;
	
    if(Head==NULL)
	{
		return;
	}
	else
	{
		temp=Head;
		Head=temp->next;
		delete temp;
	}
	Count--;	
}

template<class T>
void SinglyLL<T>::DeleteLast()
{
	struct node<T>*temp=NULL;
	if(Head==NULL)
	{
		return;
	}
	else if(Head->next==NULL)
	{
		delete Head;
		Head=NULL;
	}
	else
	{
		temp=Head;
		while(temp->next->next!=NULL)
		{
			temp=temp->next;
		}
		delete temp->next;
		temp->next=NULL;
	}
	Count--;
}

template<class T>
void SinglyLL<T>::DeleteAtPos(int pos)
{
	int size=0;
	struct node <T>*newn=NULL;
	size=CountNode();
	if((pos<1)||(pos>size)) 
	{
		cout<<"position is invalid\n";
		return;
	}
	
	if(pos==1)
	{
		DeleteFirst();
	}
	else if(pos==size)
	{
		DeleteLast();
	}
	else
	{
		struct node <T>* temp=Head;
		for(int iCnt=1;iCnt<pos-1;iCnt++)
		{
			temp=temp->next;
		}
		struct node <T>* tempdelete=temp->next;
        temp->next=temp->next->next;
		delete tempdelete;	
		Count--;
	}

}	
	
int main()
{
	SinglyLL <char>obhj;
	
	DoublyLL <float>obhj1;
	
	SinglyCLL <int>obhj2;
	
	Stack <char>obhj3;
	
	Queue <int>obhj4;
	
	obhj.InsertFirst('a');
	obhj.InsertFirst('b');
	obhj.InsertFirst('c');
	obhj.InsertFirst('d');
	obhj.Display();
	obhj.InsertAtPos('o',3);
	obhj.InsertLast('e');
	obhj.Display();
	obhj.DeleteAtPos(3);
	obhj.DeleteFirst();
	obhj.Display();
	obhj.DeleteLast();
	obhj.Display();
	
	obhj1.InsertFirst(11);
	obhj1.InsertFirst(21);
	obhj1.InsertFirst(51);
	obhj1.InsertFirst(101);
	obhj1.InsertAtPos(121,3);
	obhj1.Display();
	obhj1.DeleteFirst();
	obhj1.Display();
	return 0;
}