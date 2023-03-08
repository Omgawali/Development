#include<stdio.h>


void DisplayR()
{
	static int iCnt=5;
	if(iCnt>0)
	{
		printf("%d\t",iCnt);
		iCnt--;
	}
	DisplayR();                   //recursive
}
int main()
{

	DisplayR();
	return 0;
}