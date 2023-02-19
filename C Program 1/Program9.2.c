// write program which accept number from user and display below pattern
#include<stdio.h>

int DollarToINR(int iNo)
{
   
   int iDoll = 1;
   int iCnt = 0;
   for(iCnt = 1; iCnt <= iNo; iCnt++)
   if(iNo == 70)
    {
        iDoll = iDoll * iCnt;
    }
   return iDoll;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);
    printf("Value in INR is %d",iRet);
    return 0;
}