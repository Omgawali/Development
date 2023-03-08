
#include<iostream>
using namespace std;
void Display(char ch)
{
	if((ch=='a')||(ch=='A'))
	{
		printf("your exam at 7 AM");
	}
	else if((ch=='b')||(ch=='B'))
	{
		printf("your exam at 8:30 AM");
	}
	else if((ch=='c')||(ch=='C'))
	{
		printf("your exam at 9:20 AM");
	}
	else if((ch=='d')||(ch=='D'))
	{
		printf("your exam at 10:30 AM");
	}
} 

int main()
{
	char cValue='\0';
	bool bRet;
	
	printf("enter the charchter");
	scanf("%c",&cValue);
	
	Display(cValue);
	
	return 0;
}