//Iterative
//accept number from user and count number of digit of that number
//10
//2
#include<stdio.h>

int CountDigitR(int No)
{
    int iCnt = 0;
    while(No != 0)
    {
      iCnt++;
      No = No / 10;
    }
    return iCnt;
}
int main()
{
    int Value = 0, iRet = 0;

    printf("Enter the Number\n");
    scanf("%d",&Value);

    iRet = CountDigitR(Value);

    printf("Number of digit are : %d\n",iRet);

    return 0;
}