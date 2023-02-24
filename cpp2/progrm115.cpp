    
#include<iostream>
using namespace std;

int strlenX(char str[])
{
    int iCnt=0;
    while(*str!='\0')
	{
		cout<<*str<<endl;
		str++;
		iCnt++;
	}
return iCnt;	
}
int main()
{
	char Arr[20];
    
	cout<<"Enter string"<<endl;

	cin.getline(Arr,20);

    int iRet=strlenX(Arr);
	cout<<"length is"<<iRet<<endl;
	return 0;
}