//file handling
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>  

int main()
{
    char Fname[20];
    int fd = 0;

    printf("Enter the file name that you want to creat : \n");
    scanf("%s",Fname);

    fd = creat(Fname,0777);

    if(fd == -1)
    {
        printf("Unable to creat file\n");
    }
    else
    {
        printf("File is sucessfully created with fd %d\n",fd);
    }

    return 0;
}