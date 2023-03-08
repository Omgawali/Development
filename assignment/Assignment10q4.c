//ip  n   6
//    start   60
//     end    90
//   element  85   66    3    76    93    88
//   op            66         76          88

#include<stdio.h>
#include<stdlib.h>
void Range(int Arr[],int iLength,int iStart,int iEnd)
{
	int iCnt=0;
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt]>=iStart && Arr[iCnt]<=iEnd)
		{
		    printf("%d",Arr[iCnt]);
		}
	}	
}
int main()
{
	int iSize=0,iRet=0,iCnt=0,iValue=0,iValue1=0;
	int *p=NULL;
	
	printf("Enter no of elements\n");
	scanf("%d",&iSize);

	printf("Enter the starting point\n");
	scanf("%d",&iValue);
	
	printf("Enter the ending point\n");
	scanf("%d",&iValue1);
	
	p=(int *)malloc(sizeof(int)*iSize);
	
	printf("Enter %d elements\n",iSize);
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d\n",&p[iCnt]);
	}
	Range(p,iSize,iValue,iValue1);
	return 0;
}