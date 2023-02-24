//
//
//
//
//
#include<stdio.h>
void Display(int iRow,int iCol)
{
	int i=0,j=0;
	if(iRow!=iCol)
	{
		printf("invalid input");
	  return;
	}
	
    for(i=1;i<=iRow;i++)
	{
		for(j=1;j<=iCol;j++)
	    {
		  if((i==1) || (j==iCol)  || (j==1)  ||  (i==iRow))
		  {
		    printf("*\t");
		  }
		  else 
		  {
		    printf(" \t");
		  }
		}
	   printf("\n");
	}
}

int main()
{
	int iValue=0,iValue1=0;
	printf("Enter value\n");
	scanf("%d",&iValue);
	printf("Enter values\n");
	scanf("%d",&iValue1);
	
	Display(iValue,iValue1);
	return 0;
}