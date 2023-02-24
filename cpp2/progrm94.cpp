

//accept no from user and return factorial
//1*2*3*4

#include<iostream>
using namespace std;

class Number
{
	public:
     
	int Factorial(int no)
    {
	int iFact=1;
	
	for(int iCnt=1;iCnt<=no;iCnt++)
	{
	//	iFact=iFact*iCnt;
	iFact*=iCnt;
	}
	return iFact;
    }
};

int main()
{
	Number nobhj;
	
	int iValue=0;
	int iRet=0;
	
	cout<<"Enter thje value\n";
	cin>>iValue;
	
	iRet=nobhj.Factorial(iValue);
	
	cout<<"GFact is \n"<<iRet<<endl;
	return 0;
}