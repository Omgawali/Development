



#include<stdio.h>

void Display(int iNo,int iNo1)
{
	int iCnt=0,iCnt1=0;
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		for(iCnt1=1;iCnt1<=iNo1;iCnt1++)
		{
		printf("%d\t",iCnt);
		}
		printf("\n");
	}
}

int main()
{
	int iValue=0,iValue1=0;
	printf("Enter value\n");
	scanf("%d",&iValue);
	
	printf("Enter value\n");
	scanf("%d",&iValue1);
	
	Display(iValue,iValue1);
	return 0;
}