#include<stdio.h>

/*
1 4000
2 8000
5 20000
10 40000
*/
void JwelersPortal(int iWeight)
{
  switch(iWeight)
  {
   case 1:
    printf("Your bill amount 4000");
    break;
  case 2:
    printf("Your bill amount 8000");
    break;
  case 5:
	  printf("Your bill amount 20000");
      break;
  case 10:
	  printf("Your bill amount 40000");
	  break;
	  
	  default:
	  printf("Invalid weight\n");
  }
 
}

int main()
{
int iValue=0;
printf("Enter size of the gold you want to purchase\n");
scanf("%d",&iValue);

JwelersPortal(iValue);

return 0;
}