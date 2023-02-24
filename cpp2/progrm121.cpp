//accept string n count vowel\s

#include<iostream>
using namespace std;

int Countvowel(char str[])
{
	int iCnt=0;
	
	while(*str!='\0')
	{
		if((*str=='a')||(*str=='e')||(*str=='i')||(*str=='o')||(*str=='u'))
		{
			iCnt++;
		}
		str++;
	}
	return iCnt;
}

int main()
{
	char Arr[20];
    
	cout<<"Enter string"<<endl;

	cin.getline(Arr,20);

    int iRet=Countvowel(Arr);
	cout<<"count vowel are"<<iRet<<endl;
	return 0;
}
