//

#include<stdio.h>

void DisplayR(int iNo)
{
	int i=0;
	char ch='a';
	
	while(i<iNo)
	{
		printf("%c\t",ch);
		ch++;
		i++;
	}
}

int main()
{
    int iValue=0;
	printf("Enter thje vvalue\n");
	scanf("%d",&iValue);
	DisplayR(iValue);	
	
	return 0;
}