

#include<stdio.h>

void DisplayR(int iNo)
{
	static int i=0;
	static char ch='a';
	
	if(i<iNo)
	{
		printf("%c\t",ch);
		ch++;
		i++;
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