

#include<iostream>

using namespace std;

class ArrayX
{
	private:
	int *Arr;
	int iSize;
	
	public:
    	ArrayX(int iValue)               //parametrized costructor
	    {
		this->iSize=iValue;
		Arr=new int[iSize];         //resource
    	}
		
		~ArrayX()                    //destructor
		{
			delete []Arr;             //deallocate
		}
		
		void Accept()
		{
			int iCnt=0;
			cout<<"Enter the elemnts"<<endl;
			for(iCnt=0;iCnt<iSize;iCnt++)
	        {
	        	cin>>Arr[iCnt];
	        }
		}
		
		void Display()
		{
			cout<<"Elements of array are"<<endl;
			for(int iCnt=0;iCnt<iSize;iCnt++)
			{
				cout<<Arr[iCnt]<<endl;
			}
		}
		
		
        int Summation()
        {
	       int iSum=0,iCnt=0;
	
	      for(iCnt=0;iCnt<iSize;iCnt++)
	      {
	    	iSum=iSum+Arr[iCnt];
	      }
	return iSum;
}
};

int main()
{
	int iRet=0;
	ArrayX obhj1(5);
	obhj1.Accept();
	obhj1.Display();
	
	iRet=obhj1.Summation();
	cout<<"Additon is:"<<iRet<<endl;
	
	return 0;
}