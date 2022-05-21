//ip 7055
//op 
//5
//5
//0
//7

#include<stdio.h>

void DisplayDigits(int iNo)
{
	int iDigit=0;
	while(iNo!=0)
	{
	   iDigit=iNo%10;
	   printf("%d\n",iDigit);
	   iNo=iNo/10;
	}
	

	
	
}
int main()
{
	int iValue=0;
	printf("Enteer a num");
	scanf("%d",&iValue);
	
	DisplayDigits(iValue);
    return 0;	
}