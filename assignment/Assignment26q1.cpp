//

#include<iostream>
using namespace std;

bool Countspace(char str[],char ch)
{
	int iCnt=0;
	
	while(*str!='\0')
	{
		if((*str==ch))
		{
			break;
 
		}
		str++;
	}


    if(*str == '\0')
    {
        return false;
    }
    else
    {
        return true;
    }
	
}

int main()
{
	char Arr[20];
    char chj='0';
	cout<<"Enter string"<<endl;

	cin.getline(Arr,20);
	
    cout<<"Enter character"<<endl;
    scanf("%c",&chj);
	
   bool bRet=Countspace(Arr,chj);
     if(bRet == false)
    {
        cout<<"charcter not present"<<endl;
    }
    else
    {
        cout<<"charcter  present"<<endl;
    }

	return 0;
}