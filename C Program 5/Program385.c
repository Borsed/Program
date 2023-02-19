//file handling accept name from user and open the file
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>  
//#include<unistd.h>  // os plateform error for write
int main()
{
    char Fname[20];
    int fd = 0;
    char Data[] = "Marvellous";

    printf("Enter the file name that you want to open : \n");
    scanf("%s",Fname);

    fd = open(Fname,O_RDWR);

    if(fd == -1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        printf("File is sucessfully open with fd %d\n",fd);
        write(fd,Data,10);
    }

    return 0;
}