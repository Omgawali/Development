//accept no from user and return summation all non factors

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

#include<stdio.h>

int main()
{
   int iValue=0;
   int iRet=0;
   
   printf("Enter number");
   scanf("%d",&iValue);
   
   iRet=SumNonFactor(iValue);
   
   printf("%d",iRet);
  return 0;
}