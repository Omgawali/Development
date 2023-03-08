//accept N no of user and display all \suchj element which are even and divi\sible by 5
//

#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iLength)
{
	int iCnt=0;
	int iSum=0,iSum1=0;
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(((Arr[iCnt]%2)==0)&&((Arr[iCnt]%5)==0))
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
	Display(ptr,iSize);

    return 0;
}