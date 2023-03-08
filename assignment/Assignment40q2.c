//

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>                  //creat ahe hyat
#include<string.h>
int main()
{
	char Fname[30];
	char Data[100];
	int iRet=0;
	
	int fd=0;                      //file descpritor 	
	
	printf("Enter file name to create\n");
	scanf("%s",Fname);
	
	
	fd=creat(Fname,0777);
	if(fd==-1)
	{
		printf("Unable to create\n");
		return -1;
	}
	printf("Succefully created with Fd %d\n",fd);
	
	return 0;
} 