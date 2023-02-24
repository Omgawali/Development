

//accept no from user and return factorial
//1*2*3*4

#include<iostream>
using namespace std;

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
int main()
{
	
	int iValue=0;
	int iRet=0;
	
	cout<<"Enter thje value\n";
	cin>>iValue;
	
	iRet=Factorial(iValue);
	
	cout<<"GFact is %d\n"<<iRet<<endl;
	return 0;
}