//ip   row 4  col   4
/*

1  2  3  4
1  2  3  4
1  2  3  4 
1 2
*/


#include<stdio.h>
void Display(int iRow,int iCol)
{
	int i=0,j;
	for(i=1;i<=iRow;i++)
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