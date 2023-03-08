#include<iostream>
using namespace std;

template<class T>
T Max(T *arr,int iSize)
{
	T iMax=arr[0];
	
	for(int i=0;i<iSize;i++)
	{
	  if(iMax<arr[i])
      {
		iMax=arr[i];
	  }
	}
	return iMax;
}

int main()
{	
	int arr[]={10,20,80,40,50};
	float brr[]={1.3,2.3,3.4,4.3};
	int iSum1=Max(arr,5);
	printf("%d\n",iSum1);
	float fSum=Max(brr,4);
	printf("%f\n",fSum);
	return 0;
}