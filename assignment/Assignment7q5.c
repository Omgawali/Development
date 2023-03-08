//return difference between summation of even an summation of odd

#include<stdio.h>
int SumDigits(int iNo)
{
	
	int iDigit=0;
	int iSum=0;
	int iSum1=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	while(iNo>0)
	{
	 iDigit=iNo%10;
	 if((iDigit%2)==0)
	 {
	  iSum=iSum+iDigit;
	 }
	 if((iDigit%2)!=0)
	 {
	  iSum1=iSum1+iDigit;
	 }
	   iNo=iNo/10;
	}	
	return iSum-iSum1;
}
int main()
{
	int iValue=0;
	int iRet=0;
	printf("Enteer a num");
	scanf("%d",&iValue);
	
	iRet=SumDigits(iValue);
	printf("Summation of digits%d\n",iRet);
    return 0;	
}