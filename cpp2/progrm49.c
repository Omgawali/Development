//accept n no and accept anothjer no and return index of thjt no 
//

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int SearchGFirstOccurance(int Arr[],int iLength,int iNo)
{
	int iCnt=0;
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt]==iNo)
		{
			break;
		}
	}
	if(iCnt==iLength)
	{
	    return -1;
	}
	else
	{
	    return iCnt;
	}
}

int main()
{
    int iSize=0,iCnt=0,iRet=0,iValue=0;

    int *ptr=NULL;	
	
	printf("Enter number of elements\n");
	scanf("%d",&iSize);
	
	ptr=(int *)malloc(sizeof(int)*iSize);
	
	printf("Enter the value\n");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	
    printf("Enter the element to search\n");
	scanf("%d",&iValue);
	
	iRet=SearchGFirstOccurance(ptr,iSize,iValue);
	if(iRet==-1)
	{
		printf("There is no such element\n");
	}
	else
	{
		printf("Elements first occured at :%d\n",iRet);
	}
	free(ptr);
	return 0;
}