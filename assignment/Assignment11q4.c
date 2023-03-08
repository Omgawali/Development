//error in thjis code 

#include<stdio.h>
#include<stdlib.h>

void Frequency(int Arr[],int iLength)
{
	int iCnt=0,iFrequency=1;
	int iSum=0,iDigit=1;
	int iCnt1=0;
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{		
	     while(Arr[iCnt]!=0)
	    {
		  iCnt=0;
		  if(iCnt1<=3)
		  {
		  iDigit=Arr[iCnt]%10;
		  Arr[iCnt]=Arr[iCnt]/10;
		  }
		  printf("%d",&iDigit);
		 }iCnt++;
    }
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
	Frequency(ptr,iSize);
	
	free(ptr);
	return 0;
}
