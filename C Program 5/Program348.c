// Recursive
// * * * *
#include<stdio.h>

void DisplayI() //(I iteration)
{
    int iCnt = 1; // auto

    while(iCnt <= 4)
    {
        printf("*\t");
        iCnt++;
    }
}

void DisplayR() //(I recursion)
{
    static int iCnt = 1;

    if(iCnt <= 4)
    {
        printf("*\t");
        iCnt++;
        DisplayR(); // Recursive Call
    }
}
int main()
{
    DisplayR();
    return 0;
}