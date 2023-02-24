//chjeck whether palindrome
//ip 101
//op 
#include<stdio.h>
#include<stdbool.h>
bool Reverse(int iNo)
{
  int iDigit=0;
  int iRev=0;
  int iTemp=0;
  
  if(iNo<0)
  {
	  iNo=-iNo;
  }
  iTemp=iNo;
  while(iNo>0)
  {
    iDigit=iNo%10;
	iRev=iRev*10+iDigit;
	iNo=iNo/10;
  }
  
  if(iRev==iTemp)
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
	bool bRet=0;
	printf("Enteer a num");
	scanf("%d",&iValue);
	
	bRet=Reverse(iValue);
	if(bRet==true)
	{
    printf("%d is palindrome \n",iValue);
	}
	else
	{
		printf("%d is not palindrome",iValue);
	}
	
return 0;
}