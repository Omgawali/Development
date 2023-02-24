

#include<stdio.h>

void DisplayR(int iNo)
{
	
	static char ch='a';
	
	if(iNo>0)
	{
		printf("%c\t",ch);
		ch++;
		iNo--;
		DisplayR(iNo);
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