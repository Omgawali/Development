//accept charachter and check whether it is alphabet or not

#include<iostream>
using namespace std;

bool CountCapital(char ch)
{
	
	
	
		if((ch>='A')&&(ch<='Z')&&(ch>='a')&&(ch<='z'))
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
		printf("Chracter");
	}
	else
	{
		printf("it is not ");
	}
	return 0;
}