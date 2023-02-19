//Recursion
//accept number from user and return addition of digits
//10
//1 + 0=1
#include<stdio.h>

int SumDigitR(int No)
{
    static int Sum = 0;
    int Digit = 0;
    if(No != 0)
    {
      Digit = No % 10;
      Sum = Sum + Digit;
      No = No / 10;
      SumDigitR(No);
    }
    return Sum;
}
int main()
{
    int Value = 0, iRet = 0;

    printf("Enter the Number\n");
    scanf("%d",&Value);

    iRet = SumDigitR(Value);

    printf("Addition of digit are : %d\n",iRet);

    return 0;
}