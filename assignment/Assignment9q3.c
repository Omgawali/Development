//acceept  no and check whjethjer thje contain\s 11 or not





#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Search(int Arr[],int iLength)
{
	int iCnt=0,iNo=11;
	bool bFlag=false;
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt]==iNo)
		{
			bFlag=true;
			break;
		}
	}
  return bFlag;
}

int main()
{
    int iSize=0,iCnt=0,iRet=0,iValue=0;
	bool bRet;
    int *ptr=NULL;	
	
	printf("Enter number of elements\n");
	scanf("%d",&iSize);
	
	ptr=(int *)malloc(sizeof(int)*iSize);
	
	printf("Enter the value\n");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}

	bRet=Search(ptr,iSize);
	if(bRet==true)
	{
		printf("11 is present\n");
	}
	else
	{
		printf("11 is not present\n");
	}
	free(ptr);
	return 0;
}