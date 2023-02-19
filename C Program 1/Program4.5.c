//Write a program which accept number from user and return different between summation of all its even factor and non factors
#include<stdio.h>
int FactDiff(int iNo)
{
   int iCnt = 0;
   int iSum = 0;
   int iFact1 = 1;
   int iFact2 = 1;
   int iDiff = 0;
   //int iNo = 0;
    
   for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
      if((iNo % 2) == 0)
      {
          iSum = iSum + iDigit;
      }
      else if((iNo % 2) == 0)
      {
          iSum = iSum + iDigit;
      }
      
    }
   
    iDiff = iFact1 - iFact2;
    return iDiff;
}
  
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);
    printf("%d",iRet);

    return 0;
}

