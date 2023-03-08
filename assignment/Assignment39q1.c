
#include<stdio.h>

int DisplayR(char *str)
{
	static int iCnt=0;
   if(*str!='\0')
   {
      if(*str==' ')
	  {
	   iCnt++;
	   }
	   str++;
	   DisplayR(str);
   }
   return iCnt;
}

int main()
{
    int iValue=0;
	char arr[20];
	printf("Enter the string\n");
	scanf("%[^'\n']s",&arr);
	int iRet=DisplayR(arr);	
	
	printf("%d",iRet);
	return 0;
}