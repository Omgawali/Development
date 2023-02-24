//check whether no is perfect is not

#include<stdio.h>
#include<stdbool.h>

int AdditionFactor(int iNo)
{
   int iCnt=0;
   int iSum=0;
   if(iNo<0)
   {
	   iNo=-iNo;	   
   }
   for(iCnt=1;iCnt<=(iNo/2);iCnt++)
   {
      if((iNo%iCnt)==0)
      {
	   iSum=iSum+iCnt;
      }
   }
return iSum;
}

bool CheckPerfect(int iNo)
{
    int iAns=0;
	iAns=AdditionFactor(iNo);
	if(iAns==iNo)
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
  
   printf("Enter a value:");
   scanf("%d",&iValue);

   bRet=CheckPerfect(iValue);
   if(bRet==true)
   {
     printf("%d is a perfect number",iValue);
   }
   else
   {
     printf("%d is not perfect number\n",iValue);
   }
   
   return 0;
}