
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>                      //creat ahe hyat
#include<string.h>

#define FILESIZE 1024
int CountBig(char Fname[])
{
    char Data[FILESIZE];           //mug
	int iRet=0;
	int fd=0,iCnt=0;   
    int iSum=0;	
	fd=open(Fname,O_RDWR);
	if(fd==-1)
	{
		printf("Unable to open\n");
		return -1;
	}
	printf("Succefully open with Fd %d\n",fd);
	while((iRet=read(fd,Data,sizeof(Data)))!=0)
	{
	    for(int i=0;i<iRet;i++)
		{
			if(Data[i]>='A'&&Data[i]<='Z')
			{
				iCnt++;
			}
		}
	}
	
	close(fd);
	return iCnt;
}

int main()
{
	char Fname[30];
    
	
	printf("Enter file name to open\n");
	scanf("%s",Fname);
	
	int iRet=CountBig(Fname);
	printf("%d",iRet);
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
	
	
	return 0;