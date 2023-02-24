//count occurance ogf letter l

#include<iostream>
using namespace std;

int strlenX(char str[])
{
    int iCnt=0;
    while(*str!='\0')
	{
		
		if((*str=='l') ||(*str=='L'))
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

    int iRet=strlenX(Arr);
	cout<<"string conatins"<<iRet<<endl;
	return 0;
}