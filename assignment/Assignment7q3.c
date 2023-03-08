//return the count of digits between 3 and 7

#include<stdio.h>
int CountDigits(int iNo)
{
	int iCnt=0;
	int iDigit=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	while(iNo>0)
	{
	   iDigit=iNo%10;
	   if((iDigit>=3) && (iDigit<=7))
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
	printf("%d",iRet);
    return 0;	
}