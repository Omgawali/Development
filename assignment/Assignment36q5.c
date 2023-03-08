#include<stdio.h>


void DisplayR()
{
	static char iCnt='a';
	if(iCnt<='f')
	{
		printf("%c\t",iCnt);
		iCnt++;
	}
	DisplayR();                   //recursive
}
int main()
{

	DisplayR();
	return 0;
}