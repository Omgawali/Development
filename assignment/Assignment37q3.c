#include<stdio.h>


void DisplayR(int iCnt2)
{
	if(iCnt2>0)
	{
		printf("%d\t",iCnt2);
		iCnt2--;
	}
	DisplayR(iCnt2);                   //recursive
}
int main()
{
	 int iCnt=0;
	printf("Enter thje vvalue\n");
	scanf("%d",&iCnt);
	DisplayR(iCnt);
	return 0;
}