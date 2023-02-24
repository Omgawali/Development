//accept no from user and check whether it is prime noo
//does not have prime no
//
#include<stdio.h>
#include<stdbool.h>

bool CountFactor(int iNo)
{
   int iCnt=0;
   int iFactCnt=0;
   if(iNo<0)
   {
	   iNo=-iNo;
   }
   for(iCnt=2;iCnt<=iNo/2;iCnt++)
   {
   if(iNo%iCnt==0)
   {
   iFactCnt++; 
   }
   }
   return iFactCnt; 
}

bool CheckPrime(int iNo)
{
	int iRet=0;
	iRet=CountFactor(iNo);
	if(iRet==0)
	{
		return true;
	}
	else
	{
		return false;
	}
	
}


int main()
{
  int iValue=0;
  bool bRet;
  printf("Enter a no");
  scanf("%d",&iValue);
  
  bRet=CheckPrime(iValue);
  
  if(bRet==true)
  {
	  printf("%d is prime no",iValue);
  }
  else
  {
	  printf("%dis not prime",iValue);
  }  
  printf("");
  return 0;
}