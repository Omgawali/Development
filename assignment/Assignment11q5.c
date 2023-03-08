//ip   n    6
//          8225   665   3   76   953    858   
//          17      17    3   13   17      21

#include<stdio.h>
#include<stdlib.h>

void Frequency(int Arr[],int iLength)
{
	int iCnt=0,iFrequency=1;
	int iSum=0,iDigit=1;
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		iSum=0;
	   while(Arr[iCnt]!=0)
	    {
		  iDigit=Arr[iCnt]%10;
          iSum=iSum+iDigit;
		  Arr[iCnt]=Arr[iCnt]/10;
	    }
        printf("%d\n",iSum);		
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
