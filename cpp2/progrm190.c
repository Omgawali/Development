
#include<stdio.h>

void DisplayR(char *str)
{
   if(*str!='\0')
   {
	   printf("%c\n",*str);
	   str++;
	   DisplayR(str);
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