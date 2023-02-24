

#include "header31a.h"

int main()
{
   auto int iValue1=0,iValue2=0;
   ULONG lRet=0;
   printf("Enter Base\n");
   scanf("%d",&iValue1);
   printf("Enter power\n");
   scanf("%d",&iValue2);
   lRet=Power(iValue1,iValue2);
   printf("result is \n%ld",lRet);
   return 0;
}