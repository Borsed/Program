//Recursion
//accept number from user and check perfect or not
//28
//1+2+5 = 28
#include<stdio.h>
#include<stdbool.h>

bool CheckPerfectR(int No)
{
    static int iCnt = 1;
    static int Sum = 0;

    if(iCnt <= (No/2))
    {
        if((No % iCnt) == 0)
        {
            Sum = Sum + iCnt;
        }
        iCnt++;
        CheckPerfectR(No);
    }
    if(Sum == No)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int Value = 0;
    bool bRet = 0;

    printf("Enter the Number\n");
    scanf("%d",&Value);

    bRet = CheckPerfectR(Value);
    if(bRet == true)
    {
        printf("%d is a perfect number\n",Value);
    
    }
    else
    {
        printf("%d is not a perfect number\n",Value);

    }

    return 0;
}