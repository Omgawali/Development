//accept n no and pergform addition of n number
//

#include<stdio.h>
#include<stdlib.h>

int addition(int Arr[],int iLength)
{
	int iCnt=0;
	int iSum=0;
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
	     iSum=iSum+Arr[iCnt];
	}
	return iSum;
}

int main()
{
    int iSize=0,iRet=0,iCnt=0;
	int *ptr=NULL;
	printf("Enter no of element\n");
	scanf("%d",&iSize);
	ptr=(int *)malloc(iSize*sizeof(int));
	printf("Enter elements\n");
    for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d\n",&ptr[iCnt]);
	}
	iRet=addition(ptr,iSize);
    printf("Result is%d",iRet);
	free(ptr);
    return 0;
}