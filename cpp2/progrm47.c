//accept n no and accept another no and  count the frquency in thjt no 
//error
//progfrm76.c

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[],int iLength,int iNo)
{
	int iCnt=0,iFrequency=0;
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
	if(iNo==Arr[iCnt])
	{
		iFrequency++;
	}
   }
return iFrequency;	
}

int main()
{
    int iSize=0,iCnt=0,iRet=0,iValue=0;
    int *ptr=NULL;	
	
	printf("Enter number ogf elements\n");
	scanf("%d",&iSize);
	
	ptr=(int *)malloc(sizeof(int)*iSize);
	
	printf("Enter the value\n");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	
	printf("Enter the element to calc the frequency\n");
	scanf("%d",&iValue);
    
	iRet=Frequency(ptr,iSize,iValue);
	printf("Frequency is: %d\n",iRet);
	free(ptr);
	return 0;
}