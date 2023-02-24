//divi\sible 3 n 5

#include<stdio.h>
#include<stdbool.h>

bool Check(int iNo)
{
   if(((iNo%3)==0)&& ((iNo%5)==0))
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
	
	bRet=Check(iValue);
	if(bRet==true)
	{
		printf("%d is an divisible by 3 & 5\n",iValue);	
	}
     else
	 {
		 printf("%d is not divisble\n",iValue);
	 }	 
return 0;
} 
