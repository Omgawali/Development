#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
int main()
{
	char fname[30];
	int fd=0;
	printf("Enter the file name that yoou want to create");
    scanf("%s",fname);	
	
	fd=creat(fname,0777);
	if(fd==-1)
	{
		printf("Unable to creat gfile");
	}
	else
	{
		printf("craeted :%d",fd);
	}
	return 0;
}



// u\ser
// owner       //4+2+1
// group
//  othjer


//operation
//read           4
//write           2
//execute         1  


