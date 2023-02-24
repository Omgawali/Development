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
	
	printf("Enter the data you want to write\n");
	scanf(" %[^'\n']s",Data);
	
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
	
	fd=creat(Fname,0777);
	if(fd==-1)
	{
		printf("Unable to create\n");
		return -1;
	}
	printf("Succefully created with Fd %d\n",fd);
	
	iRet=write(fd,Data,strlen(Data));
	printf("Succefully writteni in file  %d\n",iRet);
	return 0;
} 