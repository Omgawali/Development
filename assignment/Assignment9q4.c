//acept n no and return gfrwquency ogf 11 gfrom it

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[],int iLength)
{
	int iCnt=0,iFrequency=0,iNo=11;
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
	if(Arr[iCnt]==iNo)
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
	iRet=Frequency(ptr,iSize);
	printf("Frequency is: %d\n",iRet);
	free(ptr);
	return 0;
}