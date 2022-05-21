/*
     Algorithm
   






*/

#include<stdio.h>

int Summation(int iNo)
{
  int iSum=0;
  int iCnt=0;
  
  if(iNo<0)
   {
	 iNo=-iNo;  
   }
   
   for(iCnt=1;iCnt<=iNo;iCnt++)
   {
	   iSum=iSum+iCnt;
   }   
   
	return iSum;
}
int main()
{               
	int iValue=0;
	int iRet=0;
	printf("enter a no");
	scanf("%d",&iValue);
	
	iRet=Summation(iValue);
	printf("summation is :%d\n",iRet);
  return 0;
}
/*









*/