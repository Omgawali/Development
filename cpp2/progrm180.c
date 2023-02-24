//calculate \small chjarc


#include<stdio.h>

int CountSmall(char brr[])
{
	int iCnt=0;
	while(brr!='\0')
	{
		if(*brr>'a' && *brr<'z')
		{
			iCnt++;
		}
		brr++;
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