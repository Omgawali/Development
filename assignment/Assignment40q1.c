
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>                
#include<string.h>
int main()
{
	char Fname[30];

	int fd=0;                      //file descpritor 	
	
	printf("Enter file name to open\n");
	scanf("%s",Fname);
	
	
	fd=open(Fname,O_RDONLY);
	if(fd==-1)
	{
		printf("Unable to open\n");
		return -1;
	}
	printf("Succefully open with Fd %d\n",fd);
	
	return 0;
}  