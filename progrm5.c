/*
program display 5 times Hello on screen 
*/

#include<stdio.h>

void Display(int iNo)
{
	int iCnt=0;
	
	if(iNo<0)                    //filter
	{
        iNo= -iNo;
	}
	
	for(iCnt=1;iCnt<=iNo;iCnt++)
    {
		printf("Hello\n");
	};	
}

int main()
{
    int iValue=0;
    printf("Enter the no\n");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}