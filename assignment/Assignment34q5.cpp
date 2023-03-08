#include<iostream>
using namespace std;

template<class T>
T Min(T *arr,int iSize)
{
	T iMin=arr[0];
	
	for(int i=0;i<iSize;i++)
	{
	  if(iMin>arr[i])
      {
		iMin=arr[i];
	  }
	}
	return iMin;
}

int main()
{	
	int arr[]={10,20,80,40,50};
	float brr[]={1.3,2.3,3.4,4.3};
	int iSum1=Min(arr,5);
	printf("%d\n",iSum1);
	float fSum=Min(brr,4);
	printf("%f\n",fSum);
	return 0;
}