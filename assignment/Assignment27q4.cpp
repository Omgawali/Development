
//

#include<iostream>
using namespace std;

void strrevX(char *src,char *dest)
{
     while(*src!='\0')
	{
		if((*src>'a')&&(*src<='z'))
		{
		*dest=*src;
		dest++;
		}
		
		src++;
	}
	*dest='\0';
}

int main()
{
	char Arr[20];  
	char Brr[20];    
    
	cout<<"Enter string"<<endl;

	cin.getline(Arr,20);

    strrevX(Arr,Brr);
	cout<<"copied in second string "<<Brr<<endl;
	return 0;
}