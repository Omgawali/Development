//
#include<iostream>

using namespace std;

void SwapAA(int *p,int *q)
{
	int temp;
	temp=*p;
	*p=*q;
	*q=temp;
}

int main()
{
	int No1=11,No2=22;
	
	cout<<"Before swap data is:"<<No1<<No2<<endl;
	
	SwapAA(&No1,&No2);
	
	cout<<"After swap data is:"<<No1<<No2<<endl;
	return 0;
}