//check whether it contains 0 in it or not

#include<stdio.h>
#include<stdbool.h>

bool ChkZero(int iNo)
{
	int iDigit=0;
	while(iNo!=0)
	{
		iDigit=iNo%10;
        if(iDigit==0)
		{
			return true;
		}
		iNo=iNo/10;
	}		
	return false;
}

int main()
{
   int iValue=0;
   bool bRet;
   printf("Enter a value");
   scanf("%d",&iValue);
   bRet=ChkZero(iValue);
   
    if(bRet==true)
	{
		printf("%d contains 0 in it",iValue);
	}
    else
	{
		printf("%d does not contains 0 in it",iValue);
	}
	
   return 0;
}