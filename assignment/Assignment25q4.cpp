//accept string and count no of white spaces

#include<iostream>
using namespace std;

void Countspace(char str[])
{
	int iCnt=0;
	
	while(*str!='\0')
	{
		if((*str>='0')&&(*str<='9'))
		{
			cout<<str<<endl;
			break;
		}
		str++;
	}
	
}

int main()
{
	char Arr[20];
    
	cout<<"Enter string"<<endl;

	cin.getline(Arr,20);

    Countspace(Arr);

	return 0;
}