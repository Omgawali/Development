#include<stdio.h>


void DisplayR()
{
	static int iCnt=0;
	if(iCnt<4)
	{
		printf("*\t");
		iCnt++;
	}
	DisplayR();                   //recursive
}
int main()
{

	DisplayR();
	return 0;
}