//
//

#include<stdio.h>
#include<stdlib.h>

void Display(int iptr[],int iLength)
{
	int iCnt=0;
    printf("Element of array \n");
	
    for(iCnt=0;iCnt<iLength;iCnt++)
	{
		printf("%d\t",iptr[iCnt]);
	}
}

int main()
{
	int *ptr=NULL;                               //auto int Arr[5];      
    int iSize=0;
    register int iCnt=0;	
	
	printf("enter no ogf elements\n");
	scanf("%d",&iSize);
	
	ptr=(int *)malloc(iSize*sizeof(int));
	
    printf("Enter elements:\n");
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
		scanf("%d",&ptr[iCnt]);
	}	
	
    Display(ptr,iSize);       //Display(100)
    free(ptr);
    return 0;
}