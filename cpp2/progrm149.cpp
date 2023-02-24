//

#include<iostream>
using namespace std;

template<class T>
struct node
{
	T data;
	struct node *next;
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

int main()
{
	Queue <int>obhj;
	
	obhj.Enqueue(11);
	obhj.Enqueue(21);
	obhj.Enqueue(41);
	obhj.Enqueue(51);
	
    obhj.Display();
	cout<<"Number ogf element:"<<obhj.CountNode()<<endl;
	
	obhj.Dequeue();
	obhj.Dequeue();
	obhj.Dequeue();
	
	cout<<"Number ogf element:"<<obhj.CountNode()<<endl;
	obhj.Dequeue();
		obhj.Dequeue();
	
	return 0;
}