//accept string from user an toggle string 

#include<iostream>
using namespace std;

void strlwrX(char str[])
{
	int iCnt=0;
	
	while(*str!='\0')
	{
		if((*str>='A')&&(*str<='Z'))
		{
			*str=*str+32;
		}
		else if((*str>='a')&&(*str<='z'))
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

   strlwrX(Arr);
	cout<<"after toggle are"<<Arr<<endl;
	return 0;
}