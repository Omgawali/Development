//program to display to n no on screen
//output 1 2 3 4 5
#include<stdio.h>


void Display(int iNo)
{
	int iCnt=0;
	
	if(iNo<0)
	{
		iNo=-iNo;
	}
	
     iCnt=1;
    while(iCnt<=iNo)
    {
        printf("%d\n",iCnt);
        iCnt+2;
    }

}
int main()
{               
	int iValue=0;
	printf("enter a no");
	scanf("%d",&iValue);
	
	Display(iValue);
	  
  return 0;
}