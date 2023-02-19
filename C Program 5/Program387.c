//file handling accept name from user and open the file
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

    fd = open(Fname,O_RDWR | O_APPEND);
    if(fd == -1)
    {
        return -1;
    }

    printf("Enter the data that you want to write in the file : \n");
    scanf(" %[^'\n']s",Data); // _

    Length = strlen(Data);

    //write(Kasyat, kay, kiti);
    write(fd,Data,Length);

    return 0;
}