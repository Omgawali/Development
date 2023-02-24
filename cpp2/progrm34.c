//armstrong no or not
//ip   153=1^3+5^3+3^3     mult=mult*ino
//ip   370 =3^3+7^3+0^3
//ip   1634=1^4+6^4+3^4+4^4 
//op   it is armstrong 

#include<stdio.h>
#include<stdbool.h>

bool ChckArmstrong(int iNo)
{
   int iTemp=0,Mult=1,iCnt=0;
   int iDigCnt=0;
   int iDigit=0,iSum=0; 
  
   if(iNo<0)
   {
     iNo=-iNo;
   }
   iTemp=iNo; 
   
    while(iNo!=0)
    {
     iDigCnt++;
     iNo=iNo/10;
    }
   iNo=iTemp;
   
   while(iNo!=0)
   {
    Mult=1;
    iDigit=iNo%10;
	
    for(iCnt=1;iCnt<=iDigCnt;iCnt++)
   	{
	 Mult=Mult*iDigit;
	}
    iSum=iSum+Mult;
	iNo=iNo/10;
    }
   
   if(iSum==iTemp)
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
   bool bret;
   printf("Enter a value");
   scanf("%d",&iValue);
   bret=ChckArmstrong(iValue);
   
   if(bret==true)
   {
    printf("%d is armstrong ",iValue);
   }
   else
   {
    printf("%d is not armstrong ",iValue);
   }
   return 0;
}