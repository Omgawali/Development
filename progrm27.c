//accept no from user and Display even digits
//
//
#include<stdio.h>
void DisplayEven(int iNo)
{
	
	int iDigit=0;
	
	if(iNo<0)
	{
		iNo=-iNo;
	}
	while(iNo>0)
	{
		iDigit=iNo%10;
	if((iNo%2)==0)
	{ 
	   printf("%d\n",iDigit);   
	}	
	iNo=iNo/10;
	}
}
int main()
{
	int iValue=0;
	int iRet=0;
	printf("Enteer a num");
	scanf("%d",&iValue);
	
	DisplayEven(iValue);

    return 0;	
}