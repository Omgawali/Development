#include<iostream>
using namespace std;

template<class T>
int Frequency(T *arr,int iSize,T no)
{
	int freq=0;
	for(int i=0;i<iSize;i++)
	{
	if(no==arr[i])
	{
		freq++;
	}
	}
	return freq; 
}

int main()
{
	int arr[]={10,20,30,20,50,10,20,30,20,50};
	int iRet=Frequency(arr,10,20);
	printf("%d",iRet);
	return 0;
}