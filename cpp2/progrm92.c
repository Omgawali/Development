
//accept no from user and return factorial
//1*2*3*4

#include<stdio.h>

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
	
	printf("Enter thje value\n");
	scanf("%d",&iValue);
	
	iRet=Factorial(iValue);
	
	printf("GFact is %d\n",iRet);
}