#include<iostream>
using namespace std;

template<class T>
T AddN(T *arr,int iSize)
{
	T iSum=0;
	int i=0;
	for(i=0;i<iSize;i++)
	{
		iSum=iSum+arr[i];
	}
	return iSum;
}

int main()
{
	int arr[]={10,20,30,40,50};
	float brr[]={1.3,2.3,3.4,4.3};
	int iSum1=AddN(arr,5);
	printf("%d\n",iSum1);
	float fSum=AddN(brr,4);
	printf("%f\n",fSum);
	return 0;
}