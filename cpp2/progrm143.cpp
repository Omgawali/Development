
//
#include<iostream>

using namespace std;

template <class T>
T Addition(T A,T B)
{
	T Ans;
	Ans=A+B;
     return Ans;
}
   
int main()
{
	int No1=11,No2=22;
	
	int iRet=Addition(No1,No2); 
	cout<<"Addition is:"<<iRet<<endl;
	
	
	float fNo1=11.98,fNo2=22.65;
	
	float fRet=Addition(fNo1,fNo2); 
	cout<<"Addition is:"<<fRet<<endl;
	
	
	return 0;
}