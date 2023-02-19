//Iteration
//accept number from user and return addition of numbers
//4
//4+3+2+1=10
#include<stdio.h>

int AdditionI(int No)
{
    int Sum = 0;
    int iCnt = 1;

    while(iCnt <= No)
    {
        Sum = Sum + iCnt;
        iCnt++;
    }
    return Sum;
}
int main()
{
    int Value = 0;
    int iRet = 0;

    printf("Enter the Number\n");
    scanf("%d",&Value);

    iRet = AdditionI(Value);

    printf("Addition is : %d\n",iRet);

    return 0;
}