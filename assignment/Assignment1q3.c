//print 5 to 1
//error
#include<stdio.h>

void Display()
{
  int i=0;
  int j=5;
   for(i=0;i<j;i++)
   {
	   printf("%d",i);
	   i++;
   }
}
int main()
{
 Display();
return 0;
}