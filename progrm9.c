//accept no from user and check wether it is even or not

#include<stdio.h>
#include<stdbool.h>
bool CheckEven(int iNo)
{
    if((iNo%2)==0)
	{
		return true;
	}		
	else
	{
		return false;
	}	
}
int main()
{
	int iValue=0;
	bool bRet=false;
	printf("Enter a no ");
	scanf("%d",&iValue);
	
	bRet=CheckEven(iValue);
	if(bRet==true)
	{
		printf("%d is an even no\n",iValue);	
	}
     else
	 {
		 printf("%d is odd number\n",iValue);
	 }	 
return 0;
} 