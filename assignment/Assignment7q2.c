//return the count of odd digits

#include<stdio.h>
int CountDigits(int iNo)
{
	int iCnt=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	while(iNo>0)
	{
	   if(iNo%2!=0)
	   {
	   iCnt++;
	   }
	   iNo=iNo/10;
	}	
	return iCnt;
}
int main()
{
	int iValue=0;
	int iRet=0;
	printf("Enter a num");
	scanf("%d",&iValue);
	
	iRet=CountDigits(iValue);
	printf("odd digits%d",iRet);
    return 0;	
}