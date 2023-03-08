//
//

#include<iostream>
using namespace std;

int Countspace(char str[],char ch)
{
	int iCnt=0;
	
	while(*str!='\0')
	{
		if((*str==ch))
		{
			iCnt++;
 
		}
		str++;
	}

return iCnt;

	
}

int main()
{
	char Arr[20];
    char chj='0';
	cout<<"Enter string"<<endl;

	cin.getline(Arr,20);
	
    cout<<"Enter character"<<endl;
    scanf("%c",&chj);
	
   int bRet=Countspace(Arr,chj);
    
        cout<<"charcter occurt"<<bRet<<endl;
   

	return 0;
}