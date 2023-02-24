//
#include<stdio.h>

int Sum(int iNo)
{
	static int iSum=0;
	 int iDigit=0;
	
	if(iNo!=0)
	{
		iDigit=iNo%10;
		iSum=iSum+iDigit;
		iNo=iNo/10;
		Sum(iNo);
	}
	return iSum;
}

int main()
{
	int iValue=0;
	printf("Enter thje value\n");
	scanf("%d",&iValue);
	
	int iRet=Sum(iValue);
	
	printf("Addition is%d\n",iRet);
	return 0;
}