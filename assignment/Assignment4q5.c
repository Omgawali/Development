//accept no from user and return summation of all it factors and non factors 

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
int SumNonFactor(int iNo)
{ 
   int iCnt=0;
     int Sum=0; 
   for(iCnt=1;iCnt<iNo;iCnt++)
	{
		if((iNo%iCnt)!=0)
	    {    
			Sum=Sum+iCnt;			//printf("%d\n",iCnt);
		}	
	}  
 return Sum;
}
int Diff(int iNo)
{
  int iAns=0;
  int iAns1=0;
  iAns=AdditionFactor(iNo);
  iAns1=SumNonFactor(iNo);

  return iAns-iAns1;
}


int main()
{
  int iValue=0;
  int iRet=0;
  printf("Enter a number");
  scanf("%d",&iValue);
  
  iRet=Diff(iValue);
  printf("%d",iRet);
}