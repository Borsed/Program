// write program to find even factorial of given number
#include<stdio.h>

int EvenFactorial(int iNo)
{
    if(iNo < 0)
    {
      iNo = -iNo;
    }
    int iFact = 1;
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
       if(iCnt % 2 == 0)
       {
          iFact = iFact * iCnt;
       }
    }
     return iFact;
}
int main()
{
    int iRet = 0;
    int iValue = 0;

    printf("Enter the value : \n");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);

    printf("Even Factorial of number %d\n",iRet);

    return 0;
}