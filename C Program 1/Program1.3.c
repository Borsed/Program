//Program to print 5 to 1 number on screen
#include<stdio.h>

void Display()
{
   int iCnt = 0;

    printf("----------------------------------\n");
    for(iCnt = 5; iCnt >= 1; iCnt--)
    {
        printf("%d\t",iCnt);
    }
    printf("\n----------------------------------\n");
}

int main()
{
   Display();
    return 0;
}