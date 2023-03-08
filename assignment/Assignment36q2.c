#include<stdio.h>


void DisplayR()
{
	static int iCnt=1;
	if(iCnt<=5)
	{
		printf("%d\t",iCnt);
		iCnt++;
	}
	DisplayR();                   //recursive
}
int main()
{

	DisplayR();
	return 0;
}