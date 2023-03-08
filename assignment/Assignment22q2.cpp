//accept \striing from and count no ogf cappital chjarachjter 

#include<iostream>
using namespace std;

bool CountCapital(char ch)
{
	
	
	
		if((ch>='A')&&(ch<='Z'))
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