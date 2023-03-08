//accept no from user and return diffrence between summation of even and summation of odd

#include<stdio.h>
#include<stdlib.h>

int Diffevod(int Arr[],int iLength)
{
	int iCnt=0;
	int iSum=0,iSum1=0;
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if((Arr[iCnt]%2)==0)
	    {
	     iSum=iSum+Arr[iCnt];
		}
		if((Arr[iCnt]%2)!=0)
		{
         iSum1=iSum1+Arr[iCnt];
		}
	}
	return iSum-iSum1;
	
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
	iRet=Diffevod(ptr,iSize);
    printf("Result is%d",iRet);
    return 0;
}