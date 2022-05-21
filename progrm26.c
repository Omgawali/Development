//Summation of digits
//ip 721
//op 10

#include<stdio.h>
int SumDigits(int iNo)
{
	
	int iDigit=0;
	int iSum=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	while(iNo>0)
	{
	 iDigit=iNo%10;
	  iSum=iSum+iDigit;
	   iNo=iNo/10;
	}	
	return iSum;
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