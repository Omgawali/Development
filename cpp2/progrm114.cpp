    
#include<iostream>
using namespace std;

void Display(char str[])
{
    while(*str!='\0')
	{
		cout<<*str<<endl;
		str++;
	}
}
int main()
{
	char Arr[20];
    
	cout<<"Enter string"<<endl;
	//cin>>Arr;
	cin.getline(Arr,20);
	//scanf("%[^'\n']s",Arr);
    Display(Arr);
	return 0;
}