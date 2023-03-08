//accept string and count no of white spaces

#include<iostream>
using namespace std;

int Countspace(char str[])
{
	int iCnt=0;
	
	while(*str!='\0')
	{
		if((*str==' '))
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

    int iRet=Countspace(Arr);
	cout<<"count space are"<<iRet<<endl;
	return 0;
}