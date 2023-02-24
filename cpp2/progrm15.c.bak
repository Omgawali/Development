//accept no from user and return addition of factor 
//input 10
//output 8

#include<stdio.h>

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

int main()
{
   int iValue=0;
   int iRet=0;
  
   printf("Enter a value:");
   scanf("%d",&iValue);
   
   iRet=AdditionFactor(iValue);
   printf("Sum of factors:%d",iRet);
   return 0;
}