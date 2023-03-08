

#include<stdio.h>
void Display(int iRow,int iCol)
{
	int i=0,j=0;

	int a=0;
	

	
    for(i=1,a=1;i<=iRow;i++,a++)
	{
		for(j=1;j<=iCol;j++,a++)
	    {
		 
		    printf("%d\t",a); 
          			
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