//
//accept number from user and return factorial of numbers
//4
//4*3*2*1=24
#include<stdio.h>

int AdditionR(int No)
{
    static int Sum = 0;
    static int iCnt = 1;

    if(iCnt <= No)
    {
        Sum = Sum + iCnt;
        iCnt++;
        AdditionR(No);
    }
    return Sum;
}
int main()
{
    int Value = 0;
    int iRet = 0;

    printf("Enter the Number\n");
    scanf("%d",&Value);

    iRet = AdditionR(Value);

    printf("Addition is : %d\n",iRet);

    return 0;
}