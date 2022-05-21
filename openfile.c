


#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
int main()
{
	char fname[30];
	int fd=0;
	printf("Enter the file name that yoou want to open");
    scanf("%s",fname);	
	
	fd=open(fname,O_RDWR);
	if(fd==-1)
	{
		printf("Unable to creat gfile");
	}
	else
	{
		printf("opened :%d",fd);
	}
	return 0;
}

