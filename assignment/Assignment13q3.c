//ip   5
//op   5 4 3 2 1


#include<stdio.h>

void Display(int iRow,int iCol)
{
	int i=0,j=0;
	for(i=iRow;i>=1;i--)
	{
		for(j=iCol;j>=1;j--)
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
	printf("Enter value\n");
	scanf("%d",&iValue1);
	
	Display(iValue,iValue1);
	return 0;
}
