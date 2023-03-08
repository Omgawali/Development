//Accept two numbers from user and display first number is second number of times 

//error
#include<stdio.h>

void Display(int iNo,int iFrequency)
{
  int iNo1=0;
  for(iNo1=0;iNo1<iFrequency;iNo1++)
  {
	  printf("%d",iNo1);
  }

}


int main()
{
 int iValue=0; 
 int iCount=0;
 
 printf("Enter a no");
 scanf("%d",&iValue); 
 
 printf("Enter Frequency\n");
 scanf("%d",&iCount);
 
 Display(iValue,iCount);
return 0;
}
