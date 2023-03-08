#include<stdio.h>

void Accept(int iNo)
{
  int iCnt =0;
  for(iCnt=0;iCnt<=iNo;iCnt++)
  {
    printf("*");
  }
}


int main()
{
  int iValue=0;
  printf("Enter a no");
  scanf("%d",&iValue);  
  Accept(iValue);
 return 0;
}