




#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
int main()
{
	char fname[30];
	int fd=0;
	char Data[11];
	printf("Enter the file name that yoou want to open");
    scanf("%s",fname);	
	
	fd=open(fname,O_RDWR);
	if(fd==-1)
	{
		printf("Unable to creat gfile");
		return -1;
	}
	else
	{
		printf("opened :%d",fd);
	}
	lseek(fd,4,0);
	
    read(fd,Data,6);
	
	write(1,Data,6);
	close(fd);
	return 0;
}