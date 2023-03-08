






	#include<stdio.h>
void Display(int iRow,int iCol)
{
	int i=0,j=0;
     if(iRow!=iCol)
	 {
		 return;
	 }

     for(i=1;i<=iRow;i++)
	{
		for(j=iCol;j>=1;j--)
	    {		
	      if(i==j)
		  {
		    printf("#\t");
		  }
		  else
		  {
			  printf("*\t");
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