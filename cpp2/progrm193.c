
#include<stdio.h>

void DisplayR(char *str)
{
   if(*str!='\0')
   {
	    DisplayR(str+1);//head recursion
	   printf("%s\n",str);
   }
}

int main()
{
    int iValue=0;
	char arr[20];
	printf("Enter the string\n");
	scanf("%[^'\n']s",&arr);
	DisplayR(arr);	
	return 0;
}