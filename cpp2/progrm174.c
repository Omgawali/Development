//recursion
//ip 4
// 4*3*2*1   op 24
#include<stdio.h>

int FactorialI(int iNo)
{
	int iFact=1;
	while(iNo>0)
	{
		iFact=iFact*iNo;
		iNo--;
	}
	return iFact;
}

int main()
{
	int iValue=0;
	printf("Enter the value\n");
	scanf("%d",&iValue);
	
	int iRet=FactorialI(iValue);
	printf("Factorial is %d\n",iRet);
	return 0;
}