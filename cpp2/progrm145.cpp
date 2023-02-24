//

#include<iostream>
using namespace std;
template <class T>

T Addition(T arr[],int size)
{
	T max=arr[0];
	int i=0;
	
	for(i=0;i<size;i++)
	{
		if(arr[i]>max)
		{
		max=arr[i];
		}
	}
	return max;
}

int main()
{

	int Brr[]={10,20,30,40,50};
	int iRet=Addition(Brr,5); 
	cout<<"Maximum is:"<<iRet<<endl;
	
	
	
	float Crr[]={10.11,20.11,30.11,40.11,50.11};
	float fRet=Addition(Crr,5); 
	cout<<"Maximum is:"<<fRet<<endl;
	return 0;
	
	return 0;
}