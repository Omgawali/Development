//accept one number and print that no of even no on screen
//error
#include<stdio.h>

int PrintEven(int iNo)
{
  int iCnt=0;
  int iFactNo=0;
   
   for(iCnt=0;iCnt<=iNo;iCnt++)
    {
    if((iNo%2)==0)
    {
      iNo++;
	}
	}

}

int main()
{
  int iValue=0;
  
  printf("Enter a number\n");
  scanf("%d",&iValue);
  PrintEven(iValue);
 
return 0;
}