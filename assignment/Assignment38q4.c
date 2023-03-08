#include<stdio.h>

int FactorialR(int iNo)
{
	static int iFact=1;
	
	if(iNo>0)
	{
		iFact=iFact*iNo;
		iNo--;
		FactorialR(iNo);
	}
	return iFact;
}

int main()
{
	int iValue=0;
	
	
	printf("Enter the value\n");
	scanf("%d",&iValue);
	
	int iRet=FactorialR(iValue);
	
	printf("Factorial is %d\n",iRet);
	
	return 0;
}