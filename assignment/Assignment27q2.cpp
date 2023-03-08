

#include<iostream>
using namespace std;

void strrevX(char *src,char *dest,int iCnt)
{
     while((*src!='\0')&&(iCnt!=0))
	{
	    
		*dest=*src;
		dest++;
		src++;
		iCnt--;
	}
	*dest='\0';
}

int main()
{
	char Arr[20];  
	char Brr[20];    
    int iCnt1=0;
	cout<<"Enter string"<<endl;

	cin.getline(Arr,20);
    
	printf("enter string");
	scanf("%d",&iCnt1);
	
    strrevX(Arr,Brr,iCnt1);
	cout<<"copied in second string "<<Brr<<endl;
	return 0;
}