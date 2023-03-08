#include<stdio.h>


void DisplayR(int iCnt2)
{
   static int iCnt1=1;
	if(iCnt1<iCnt2)
	{
		printf("%d\t",iCnt1);
		iCnt1++;
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