




#include<stdio.h>
void Display(int iRow,int iCol)
{
	int i=0,j=0;	
    for(i=iRow;i>=1;i--)
	{
		for(j=1;j<=iCol;j++)
	    {
		    printf("%d\t",j);       
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