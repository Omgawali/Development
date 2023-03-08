//accept no and display factor in decreasing order

#include<stdio.h>
void FactRev(int iNo)
{
	int iCnt=0;
   for(iCnt=iNo;iCnt>=1;iCnt--)
   {
   if((iNo%iCnt)==0)
	    {    
			printf("%d\n",iCnt);
		}
   }
}


int main()
{
   int iValue=0;
   printf("Enter a no:");
   scanf("%d",&iValue);
   
   FactRev(iValue);
   return 0;
}