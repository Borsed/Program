// Recursive
//accept number from user and printn *
#include<stdio.h>

void DisplayR(int No) 
{
    static int iCnt = 1;  

    if(iCnt <= No)
    {
        printf("*\t");
        iCnt++;
        DisplayR(No);
    }
}
int main()
{
    int Value = 0;

    printf("Enter the Number\n");
    scanf("%d",&Value);

    DisplayR(Value);
    
    printf("\nEnd of main\n");

    return 0;
}