//

#include<iostream>
using namespace std;

int main()
{
	char Arr[]="Hello";
	int i=0;
	
	while(Arr[i]!='\0')
	{
		cout<<Arr[i]<<endl;
		i++;
	}
	
	for(i=0;Arr[i]!='\0';i++)
	{
		cout<<Arr[i]<<endl;
	}
    
	return 0;
}