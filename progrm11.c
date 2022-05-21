#include<stdio.h>
void DisplayClass(float fNo)
{
   if((fNo>0.0) && (fNo<35.0))
   {
     printf("fail\n");
   }
   else if((fNo>=35.0) && (fNo<50.0))
   {
     printf("pass class\n");
   }
   else if((fNo>=50.0) && (fNo<60.0))
   {
     printf("second class\n");
   }
   else if((fNo>=60.0) && (fNo<70.0))
   {
     printf("First class\n");
   }
   else if((fNo>=70.0) && (fNo<=100))
   {
     printf("Distinction\n");
   }
   else
   {
	 printf("Invalid marks\n");
   }   
}
int main()
{
	float fValue=0;
	printf("Enter a no ");
	scanf("%f",&fValue);
	
	DisplayClass(fValue);
	
	return 0;
}	