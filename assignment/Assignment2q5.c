//Accept number gfrom u\ser and chjeck and chhjeck whjethjer number i\s even or odd 

#include<stdio.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkEven(int iNo)
{
   if((iNo%2)==0)
  {
   return 1;
  }
  else
  {
    return 0; 
  }
}


int main()
{
  int iValue=0;
  BOOL bRet=FALSE;
  
  printf("Enter a no");
  scanf("%d",&iValue);
  
  bRet=ChkEven(iValue);
  
  if(bRet==1)
{
  printf("even");
}
else
{
  printf("odd");
}
return 0;
}