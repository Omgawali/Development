
	
#include<iostream>
using namespace std;

void strrevX(char *src,char *dest)
{
	
	
char *start=src;
char *start1=src;
	char *end=src;
	char temp;
	
	while(*end!='\0')
	{
		end++;
	}
	end--;
	
     while((*src!='\0')||(start1<end))
	{
        
      temp=*start;
		*start=*end;
		*end=temp;
		start++;
		end--;
	
		*dest=*end;
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