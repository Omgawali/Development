//armstrong no or not
//ip   153=1^3+5^3+3^3     mult=mult*ino
//ip   370 =3^3+7^3+0^3
//ip   1634=1^4+6^4+3^4+4^4 
//op   it is armstrong
#include<stdio.h>
#include<stdbool.h>
int Power(int iNo1,int iNo2)
{
    int Mult=1;
    int iCnt=0;
	for(iCnt=1;iCnt<=iNo2;iCnt++)
	{
		Mult=Mult*iNo1;
	}
	return Mult;
}
bool ChckArmstrong(int iNo)
{
   int iTemp=0;
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
     iDigit=iNo%10;
     iSum=iSum+Power(iDigit,iDigCnt); 
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
     printf("%d is armstrong \n",iValue);
   }
   else
   {
     printf("%d is not armstrong \n",iValue);
   }
   return 0;
}