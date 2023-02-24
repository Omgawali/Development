//accept array from user and add

#include<stdio.h>

int Sum(int Arr[],int iSize)
{
	int i=0;
	static int iSum=0;
	
	if(iSize>0)
	{
		iSum=iSum+Arr[iSize-1];
		iSize--;
		Sum(Arr,iSize);
	}
	return iSum;
}

int main()
{
	int Brr[]={10,20,30,40};
	int iRet=0;
	
	iRet=Sum(Brr,4);
	
	printf("Summation is %d\n",iRet);
	return 0;
}