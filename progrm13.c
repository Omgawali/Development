//Accept number from user and display factors
//input: 10
//output: 1 2 5
//input: 9
//output: 1 3
//input: 17
//output: 1 
//input: 20
//output: 1 2 4 5 10
//input: -20
//output: 1 2 4 5 10

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
		if((iNo%iCnt)==0)
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

/*







*/