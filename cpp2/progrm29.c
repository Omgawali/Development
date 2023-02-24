//accept no from user reverse no
#include<stdio.h>
int Reverse(int iNo)
{
  int iDigit=0;
  int iRev=0;
  
  while(iNo>0)
  {
    iDigit=iNo%10;
	iRev=iRev*10+iDigit;
	iNo=iNo/10;
  }
  return iRev;
}

#include<stdio.h>

int main()
{
    int iValue=0;
	int iRet=0;
	printf("Enteer a num");
	scanf("%d",&iValue);
	
	iRet=Reverse(iValue);
    printf("%d\n",iRet);
return 0;
}