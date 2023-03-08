//reverse the no

#include<stdio.h>

void DisplayDigit(int iNo)
{
	int iDigit=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	while(iNo!=0)
	{
		iDigit=iNo%10;
        printf("%d",iDigit);
		iNo=iNo/10;
	}
	
}

int main()
{
    int iValue=0;
	printf("Enter a no");
	scanf("%d",&iValue);
	
	DisplayDigit(iValue);
   return 0;
}