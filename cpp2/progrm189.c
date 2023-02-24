


#include<stdio.h>

void DisplayR(char *str)
{
   while(*str!='\0')
   {
	   printf("%c\n",*str);
	   str++;
   }
}

int main()
{
    int iValue=0;
	char arr[20];
	printf("Enter the string\n");
	scanf("%[^'\n']s",&arr);
	DisplayR(iValue);	
	
	return 0;
}