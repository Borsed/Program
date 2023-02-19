//file handling accept two file from user and copy to data
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h> 
#include<string.h> 
//#include<unistd.h>  // os platform error for write

int main(int argc, char *argv[])
{
    int fdSource = 0, fdDest = 0, Length = 0;
    char Data[100];

    fdSource = open(argv[1],O_RDONLY);

    if(fdSource == -1)
    {
        printf("Unable to open file\n");
        return -1;
    }

    fdDest = creat(argv[2],0777);

    if(fdDest == -1)
    {
        printf("Unable to creat new file\n");
        return -1;
    }

    while((Length = read(fdSource,Data,sizeof(Data))) != 0)
    {
        write(fdDest,Data,Length);
    }

    close(fdSource);
    close(fdDest);

    printf("Data successfully copied..\n");

    return 0;
}