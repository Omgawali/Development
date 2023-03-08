//calculate \small chjarc


#include<stdio.h>

int CountSmall(char *str)
{
	int iCnt=0;
	while(str!='\0')
	{
		if(*str>'a' && *str<'z')
		{
			iCnt++;
		}
		str++;
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