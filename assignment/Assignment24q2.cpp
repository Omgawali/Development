//accept \striing from and count no ogf small chjarachjter 

#include<iostream>
using namespace std;

int CountCapital(char str[])
{
	int iCnt=0;
	
	while(*str!='\0')
	{
		if((*str>='a')&&(*str<='z'))
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

    int iRet=CountCapital(Arr);
	cout<<"Capital char are"<<iRet<<endl;
	return 0;
}