

#include<stdio.h>

void Display(int iNo)
{
	int iCnt=0;
    int iNo1=iNo;
	for(iCnt=1;iCnt<=iNo*2;iCnt++)
	{
		if(iCnt%2==0)
		{
		printf("%d\t",iCnt);
		}
	}
}

int main()
{
	int iValue=0;
	printf("Enter value\n");
	scanf("%d",&iValue);
	
	Display(iValue);
	return 0;
}