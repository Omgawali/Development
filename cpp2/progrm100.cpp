#include<iostream>
using namespace std;
class Pattern
{
	private:
	int iRow,iCol;
	
	public:
	Pattern(int a,int b)
	{
		this->iRow=a;
		this->iCol=b;
	}
	
	void Display()
	{
		int i=0,j=0;
		
		for(i=0;i<iRow;i++)
		{
			for(j=0;j<iCol;j++)
			{
				cout<<"*"<<"\t";
			}
			cout<<endl;
		}	
	}
};

int main()
{
	Pattern obhj(4,4);
	obhj.Display();
	
	return 0;
}