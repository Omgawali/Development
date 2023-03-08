
#include<iostream>
using namespace std;

bool CountCapital(char ch)
{
		if((ch>='a')&&(ch<='z'))
		{
			return true;
		}
		
	return false;
}

int main()
{
	char cValue='\0';
	bool bRet;
	
	printf("enter the charchter");
	scanf("%c",&cValue);
	
	bRet= CountCapital(cValue);
	
	if(bRet==true)
	{
		printf("small case");
	}
	else
	{
		printf("it is not ");
	}
	return 0;
}