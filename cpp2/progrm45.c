//accept n no from user and return the largest no from no
//important no
//positive & negative no

#include<stdio.h>
#include<stdlib.h>

int Max(int Arr[],int iLength)
{
	int iCnt=0,iMax=Arr[0];

	for(iCnt=0;iCnt<iLength;iCnt++)
	{
        if(iMax < Arr[iCnt])
		{
			iMax=Arr[iCnt];
		}	
	}
    return iMax;
}

int main()
{
    int iSize=0,iRet=0,iCnt=0;
	int *ptr=NULL;
	
	printf("Enter no of element\n");
	scanf("%d",&iSize);
	
	ptr=(int *)malloc(iSize*sizeof(int));
	
	printf("Enter Values\n");
	
    for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d\n",&ptr[iCnt]);
	}
	
	iRet=Max(ptr,iSize);
    printf("Result is%d",iRet);
	free(ptr);
    return 0;
}


