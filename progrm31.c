//ip 2 4
//op 16
/*
    START
	   ACCEPT ONE NUM
	   ACCEPT ANOTHJER NUM
	   CREATE ONE VARIABLE AS MULT
	   SET THJ VALUE INT VARIABLE MULT
	   
	   CREATE ONE COUNTRE AS CNNT
	   SET THE COUNTER 1
	   
	   ITERATE TILL THE COUNTER IS LESS THAN OR EQUAL TO NO2
        
*/



#include<stdio.h>
typedef unsigned long int ULONG;

ULONG Power(int iNo1,int iNo2)
{
    ULONG Mult=1;
	register int iCnt=0;
	for(iCnt=1;iCnt<=iNo2;iCnt++)
	{
		Mult=Mult*iNo1;
	}
	return Mult;
}

int main()
{
   auto int iValue1=0,iValue2=0;
   ULONG lRet=0;
   printf("Enter Base\n");
   scanf("%d",&iValue1);
   printf("Enter power\n");
   scanf("%d",&iValue2);
   lRet=Power(iValue1,iValue2);
   printf("result is \n%ld",lRet);
   return 0;
}