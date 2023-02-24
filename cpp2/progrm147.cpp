

#include<iostream>
using namespace std;

template <class T>

class ArrayX
{
	public:
	T *Arr;
	int Size;
	
	ArrayX(int value);
	
	
	~ArrayX();

	
	void Accept();
	
	
	void Display();
	
	
	T Maximum();
	
};

template <class T>
	ArrayX<T>::ArrayX(int value)
	{
		Size=value;
		Arr=new T[Size];
	}
template <class T>
    ArrayX<T>::~ArrayX()
	{
		delete []Arr;
	}
   template <class T> 
	void ArrayX<T>::Accept()
	{
		cout<<"enter thje value"<<endl;
		for(int i=0;i<Size;i++)
		{
			cin>>Arr[i];
		}
		
	}
template <class T>
    void ArrayX<T>::Display()
	{
		cout<<" value are"<<endl;
		for(int i=0;i<Size;i++)
		{
			cout<<Arr[i];
		}
	}
template <class T>
    T ArrayX<T>::Maximum()
	{
		T Max=Arr[0];
		for(int i=0;i<Size;i++)
		{
			if(Arr[i]>Max)
			{
				Max=Arr[i];
			}
		}
		return Max;
	}
	
int main()
{
     ArrayX <int>obhj1(5);
	 obhj1.Accept();
	 obhj1.Display();
	 int iret=obhj1.Maximum();
	 
	 cout<<"MAx"<<iret<<endl;
	 
	      ArrayX <float>obhj2(5);
	 obhj2.Accept();
	 obhj2.Display();
	 float fret=obhj2.Maximum();
	 
	 cout<<"MAx"<<fret<<endl;
	return 0;
}