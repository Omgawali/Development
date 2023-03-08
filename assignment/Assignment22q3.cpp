//chjk whjethjer it is digit or not
#include<iostream>
using namespace std;

bool CountCapital(char ch)
{
	
	
	
		if((ch>='0')&&(ch<='9'))
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
		printf("Capital");
	}
	else
	{
		printf("it is not ");
	}
	return 0;
}