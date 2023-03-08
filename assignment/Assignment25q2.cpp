//accept string from user an convert string in upper case

#include<iostream>
using namespace std;

void struprX(char str[])
{
	int iCnt=0;
	
	while(*str!='\0')
	{
		if((*str>='a')&&(*str<='z'))
		{
			*str=*str-32;
		}
		str++;
	}
}

int main()
{
	char Arr[20];
    
	cout<<"Enter string"<<endl;

	cin.getline(Arr,20);

   struprX(Arr);
	cout<<"lower caseare "<<Arr<<endl;
	return 0;
}