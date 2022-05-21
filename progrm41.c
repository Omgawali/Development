//ip   
//op   

#include<stdio.h>
#include<stdlib.h>

void DisplayEven(int Arr[],int iLength)
{
	int iCnt=0;
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if((Arr[iCnt]%2)==0)
		{
		printf("%d\n",Arr[iCnt]);
		}
	}
}

int main()
{
    int *ptr=NULL;
	int iValue=0;
	int iSize=0;
	int iCnt=0;
	printf("Enter no of elements");
	scanf("%d",&iSize);
	
	ptr=(int *)malloc(iSize*sizeof(int));
    
    printf("Enter value array\n");	
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d\n",&ptr[iCnt]);
	}
	
	DisplayEven(ptr,iSize);
	free(ptr);
	return 0;
}