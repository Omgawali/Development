#include<stdio.h>

void DisplayR(int iCnt1)
{
	static char iCnt='a';
	static int iCnt2=0;
	if(iCnt2<iCnt1)
	{
		printf("%c\t",iCnt);
		iCnt++;
	    iCnt2++;
	}
	DisplayR(iCnt1);    
}

int main()
{
	   int iCnt=0;
	printf("Enter thje vvalue\n");
	scanf("%d",&iCnt);
	DisplayR(iCnt);	
	return 0;
}