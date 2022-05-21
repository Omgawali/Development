//backward di\splay and gforward di\splay
#include<stdio.h>
#include<stdbool.h>
void DisplayF(int iNo)
{
  int iCnt=0;
  for(iCnt=1;iCnt<=iNo;iCnt++)
   {
    printf("%d",iCnt);
   }  

} 

void DisplayB(int iNo)
{
   int iCnt=0;
   
   for(iCnt=iNo;iCnt>=1;iCnt--)
   {
    printf("%d",iCnt);
   }
   
}



int main()
{
  int iValue=0;
  printf("enter a no");
  scanf("%d",&iValue);
  DisplayF(iValue);
  printf("forward");
  DisplayB(iValue);
  printf("Backward");
  
  
  
return 0;
}