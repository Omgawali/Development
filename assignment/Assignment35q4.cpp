#include<iostream>
using namespace std;

template<class T>
int Frequency(T *arr,int iSize,T no)
{
	int freq=0;
	for(int i=iSize;i>=0;i--)
	{
	if(no==arr[i])
	{
		break;
	}
	freq++;
	}
	return freq; 
}

int main()
{
	int arr[]={10,20,30,10,30,40,10,40,10};
	int iRet=Frequency(arr,9,40);
	printf("%d",iRet);
	return 0;
}