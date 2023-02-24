//accept u\ser and toggle thje ca\se ogf thjat \string

#include<iostream>
using namespace std;

void strtoggleX(char str[])
{
	int iCnt=0;
	
	while(*str!='\0')
	{
		if((*str>='a')&&(*str<='z'))
		{
			*str=*str-32;
		}
		else if((*str>='A')&&(*str<='Z'))
		{
			*str=*str+32;
		}
		str++;
	}
}

int main()
{
	char Arr[20];
    
	cout<<"Enter string"<<endl;

	cin.getline(Arr,20);

   strtoggleX(Arr);
	cout<<"toggle are "<<Arr<<endl;
	return 0;
}