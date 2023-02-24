
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
	
	int fd=0;                      //file descpritor 	
	
	printf("Enter file name to open\n");
	scanf("%s",Fname);
	
	
	/*
	permission     0_owner_group_other
	
	               octal mhjnun pahjila 0
				   read   4
				   write  + 2
				   execute + 1
				   
				   pahjila 7 hja owner krta
				   dusra 7 hja group krta
				   tesra 7 hja other krta 
	*/			   
	// O_RDONLY  Read
	// O_WRONLY  Write
	// O_RDWR     Read+write
	
	fd=open(Fname,O_RDWR | O_APPEND);
	if(fd==-1)
	{
		printf("Unable to open\n");
		return -1;
	}
	printf("Succefully open with Fd %d\n",fd);
	
	
	int iRet= read(fd,Data,10);
	printf("Succefully read bytes %d\n",iRet);
	//printf("Data from gfile\n %s",Data);
	write(1,Data,iRet);
	return 0;
}  