// write program which accept number from user and return multiplication of all digits
#include<stdio.h>

int MultDigits(int iNo) //N
{
    int iMult = 1;
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
      iCnt = iNo % 10;
      iMult = iNo * iCnt;
    }
     iNo = iNo /10;   
  return iMult;
}
int main()
{
  int iValue = 0;
  int iRet = 0;

  printf("Enter number\n");
  scanf("%d",&iValue);

  iRet = MultDigits(iValue);

  printf("%d",iRet);

  return 0;
}