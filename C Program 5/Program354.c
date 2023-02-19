//Recursion
/accept number from user and return factorial of numbers
//4
//4*3*2*1=24
#include<stdio.h>

int FactorialR(int No)
{
    static int Fact = 1;
    static int iCnt = 1;

    if(iCnt <= No)
    {
        Fact = Fact * iCnt;
        iCnt++;
        FactorialR(No);
    }
    return Fact;
}
int main()
{
    int Value = 0;
    int iRet = 0;

    printf("Enter the Number\n");
    scanf("%d",&Value);

    iRet = FactorialR(Value);

    printf("Factorial is : %d\n",iRet);

    return 0;
}