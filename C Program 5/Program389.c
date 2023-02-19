//file handling accept name from user and open and read the file (solution to garbage)
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h> 
#include<string.h> 
//#include<unistd.h>  // os plateform error for write

int main()
{
    char Fname[20];
    int fd = 0, Length = 0;
    char Data[100];

    printf("Enter the file name that you want to open : \n");
    scanf("%s",Fname);

    fd = open(Fname,O_RDWR);
    if(fd == -1)
    {
        return -1;
    }

    //read(kuthun, kasyat, kiti);
    Length = read(fd,Data,13);

    printf("Data from file is \n");
    write(1,Data,Length);

    return 0;
}