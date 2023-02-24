//
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>
#include<stdbool.h>


int main()
{
    char Fname1[20];
	char Data[10];
	int fd=0;

	
	printf("Enter gfiles name whjich contains data \n");
	scanf("%s",Fname1);
	fd=open(Fname1,O_RDONLY);
	if(fd==-1)
	{
		printf("Unable to open");
		return -1;
	}
	
	//0          startingf point
	//1            current pos
	//2           end point
	
	lseek(fd,-5,2);//(kashat,kiti,kutun)
	read(fd,Data,5);
	write(1,Data,5);
	

    return 0;    
}