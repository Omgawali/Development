//accept one no from user and print even factor of that no
//input 36
//op 2 6 12 18
#include<stdio.h>

void DisplayFactors(int iNo)
{
	int iCnt=0;
	if(iNo<0)
	{
	    iNo=-iNo;
	}
	
	for(iCnt=1;iCnt <=(iNo/2) ;iCnt++)
	{
		if(((iNo%iCnt)==0)&&((iCnt%2)==0))
	    {    
			printf("%d\n",iCnt);
		}	
	}    
}    

int main()
{
   int iValue=0;
   printf("Enter a no:\n");
   scanf("%d",&iValue);
    
   DisplayFactors(iValue);	
   
return 0;
}