//accept two \stringf gfrom u\ser and copy thje content of second string in last of first

#include<iostream>
using namespace std;

void strcatX(char *src,char *dest)
{
	while(*dest!=0)
	{
		dest++;
	}
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
    
	cout<<"Enter first string"<<endl;
	cin.getline(Arr,20);
	cout<<"Enter second string"<<endl;
	cin.getline(Brr,20);	

    strcatX(Arr,Brr);
	cout<<"string after concat "<<Brr<<endl;
	return 0;
}