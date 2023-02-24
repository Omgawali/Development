//return no ogf digfit\s 
//ip 1001
//op 4
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
	   
	   iCnt++;
	   iNo=iNo/10;
	}	
	return iCnt;
}
int main()
{
	int iValue=0;
	int iRet=0;
	printf("Enteer a num");
	scanf("%d",&iValue);
	
	iRet=CountDigits(iValue);
	printf("no ogf digits%d",iRet);
    return 0;	
}