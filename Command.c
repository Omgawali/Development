#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
	int ans=0;
	printf("Name of Executable %s\n",argv[0]);
    	printf("Name of command argf %d\n",argc);

 	
	ans=atoi(argv[1])+atoi(argv[2]);
	printf("add is%d\n",ans);
	return 0;
}

