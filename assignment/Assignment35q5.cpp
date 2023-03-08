#include<iostream>
using namespace std;

template <class T>
void Reverse(T *arr,int iSize)
{
	int iDigit=0;
	int iRev=0;
	for(int i=0;i<iSize;i++)
	{
     iDigit=arr[i]%10;
    iRev=iRev*10+iDigit;
	arr[i]=arr[i]/10;
	}
}

int main()
{
	int arr[]={10,20,30,20,50,10,20,90,20,50};
	for(int h=0;h<10;h++)
	{
	cout<<arr[h]<<endl;
	}
	Reverse(arr,10);
	for(int i=0;i<10;i++)
	{
	cout<<arr[i]<<endl;
	}
}