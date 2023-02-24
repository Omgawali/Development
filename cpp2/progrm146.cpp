//


#include<iostream>
using namespace std;

class ArrayX
{
	public:
	int *Arr;
	int Size;
	
	ArrayX(int value);
	
	
	~ArrayX();

	
	void Accept();
	
	
	void Display();
	
	
	int Maximum();
	
};

	ArrayX::ArrayX(int value)
	{
		Size=value;
		Arr=new int[Size];
	}

    ArrayX::~ArrayX()
	{
		delete []Arr;
	}
    
	void ArrayX::Accept()
	{
		cout<<"enter thje value"<<endl;
		for(int i=0;i<Size;i++)
		{
			cin>>Arr[i];
		}
		
	}

    void ArrayX::Display()
	{
		cout<<" value are"<<endl;
		for(int i=0;i<Size;i++)
		{
			cout<<Arr[i];
		}
	}

    int ArrayX::Maximum()
	{
		int Max=Arr[0];
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
     ArrayX obhj1(5);
	 obhj1.Accept();
	 obhj1.Display();
	 int iret=obhj1.Maximum();
	 
	 cout<<"MAx"<<iret<<endl;
	return 0;
}