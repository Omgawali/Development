#include<iostream>
using namespace std;
void Display(char ch)
{
     if((ch>='a')&&(ch<='z'))
		{
			ch=ch-32;
				printf("togle%c",ch);
		}
		else  if((ch>='A')&&(ch<='Z'))
		{
			ch=ch+32;
				printf("togle%c",ch);
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