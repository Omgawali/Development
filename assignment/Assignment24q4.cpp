//accept string n count vowel\s

#include<iostream>
using namespace std;

bool chkvowel(char str[])
{
	int iCnt=0;
	
	while(*str!='\0')
	{
		if((*str=='a')||(*str=='e')||(*str=='i')||(*str=='o')||(*str=='u'))
		{
			return true;
		}
		str++;
	}
	return false;
}

int main()
{
	char Arr[20];
    
	cout<<"Enter string"<<endl;

	cin.getline(Arr,20);

     bool bRet=chkvowel(Arr);
	if(bRet==true)
	{
		printf("it has vowel");
	}
	else
	{
		printf("it is not ");
	}
	return 0;
}