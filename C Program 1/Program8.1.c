
//Write a program which accept Number from user and if number is less than 50 then print small, 
//if it is greater than 50 and less than 100 then print medium, if it is greater than 100 the print large 
#include<stdio.h>

void Number(int iNo)
{
   int iCnt = 0;
    if(iNo < 50)
    {
        printf("Small");
    }

    else 
    {
    if(iNo < 100)
    {
        printf("Medium");
       
    }
    else 
    {
        printf("Large");
    }
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    Number(iValue);
    
    return 0;
}