// write program to find Odd factorial of given number
#include<stdio.h>

int FactorialDiff(int iNo)
{
    if(iNo < 0)
    {
      iNo = -iNo;
    }
    int iDiff = 0;
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
       if(iNo % 2 == 0) 
       {
        if (iNo % 2 != 0)
       {
          iDiff = iDiff * iCnt;
       }
       }
    }
     
    return iDiff;
}

int main()
{
    int iRet = 0;
    int iValue = 0;

    printf("Enter the value : \n");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial Difference between of number %d\n",iRet);

    return 0;
}