



//accept no from user and return factorial
//1*2*3*4

#include<iostream>
using namespace std;

class Number
{
	private:
	int no;            //charachteristics
	public:
     //behaviour
	 void Accept()             //setter
	 {
		 cout<<"Enter value:"<<endl;
		 cin>>this->no;
	 }
	 
	 void Display()                   //getter
	 {
		 cout<<"Value is:"<<this->no<<endl;
	 }
	 
	int Factorial()
    {
	int iFact=1;
	
	for(int iCnt=1;iCnt<=no;iCnt++)
	{
		iFact=iFact*iCnt;

	}
	return iFact;
    }
};

int main()
{
	Number nobhj;
	
	
	int iRet=0;
//cout<<nobhj.no;
	nobhj.Accept();
	nobhj.Display();
	iRet=nobhj.Factorial();
	
	cout<<"GFact is \n"<<iRet<<endl;
	return 0;
}