//accept no gfrom u\ser

#include<iostream>
using namespace std;

void strrevX(char *src,char *dest)
{
     while(*src!='\0')
	{
		*dest=*src;
		dest++;
		src++;
	}
	*dest='\0';
}

int main()
{
	char Arr[20];     //bharlelivahi 
	char Brr[20];      //korivahi
    
	cout<<"Enter string"<<endl;

	cin.getline(Arr,20);

    strrevX(Arr,Brr);
	cout<<"copied are "<<Brr<<endl;
	return 0;
}