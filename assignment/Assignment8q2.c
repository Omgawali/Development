//accept N no of user and display all \suchj element which are divi\sible by 5
//


#include<stdio.h>
#include<stdlib.h>

void Div(int Arr[],int iLength)
{
	int iCnt=0;
	int iSum=0,iSum1=0;
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if((Arr[iCnt]%5)==0)
	    {
	     printf("%d",Arr[iCnt]);
		}
	}	
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
	Div(ptr,iSize);

    return 0;
}