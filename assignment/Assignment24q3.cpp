
#include<iostream>
using namespace std;

int CountCapital(char str[])
{
	int iCnt=0;
	int iCnt1=0;
	
	while(*str!='\0')
	{
		if((*str>='a')&&(*str<='z'))
		{
			iCnt++;
		}
		else if((*str>='A')&&(*str<='Z'))
		{
			iCnt1++;
		}
		str++;
	}
	

	return iCnt-iCnt1;
}

int main()
{
	char Arr[20];
    
	cout<<"Enter string"<<endl;

	cin.getline(Arr,20);

    int iRet=CountCapital(Arr);
	cout<<"Capital char are"<<iRet<<endl;
	return 0;
}