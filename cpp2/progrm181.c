//calculate \small chjarc


#include<stdio.h>

int CountSmall(char *str)
{
	static int iCnt=0;
	if(*str!='\0')
	{
		if((*str>='a') && (*str<='z'))
		{
			iCnt++;
		}
		str++;
		CountSmall(str);
	}
	return iCnt;
}
int main()
{
	char arr[20];
	printf("Enter thje value\n");
	scanf("%[^'\n']",&arr);
	
	int iRet=CountSmall(arr);
	printf("%d",iRet);
	return 0;
}