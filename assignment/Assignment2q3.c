//Accept on number gfrom u\ser it number i\s le\s\s thjan 10 thjen print "Hello" othjerwi\se print "Demo"

#include<stdio.h>

void Display(int iNo)
{
  if(iNo<10)
  {
    printf("HEllo");
  }
  else
  {
    printf("Demo");
  }
}
int main()
{
  int iValue=0;
  
  printf("Enter a no");
  scanf("%d",&iValue);
    
  Display(iValue);

return 0;
}

