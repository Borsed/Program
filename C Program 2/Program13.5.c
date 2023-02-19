// write program which accept number from user and return different between summation of even digits summation of odd digits
#include<stdio.h>

int CountDiff(int iNo) //N
{
  int iDiff = 0;
  int iEven = 0;
  int iOdd = 0;
  int iCnt = 0;

  while(iNo != 0)
  {
    int iCnt = iNo % 10;
    {
      if(iNo % 2 == 0)
      {
        iEven = iEven + iCnt;
      }
      else
      {
        iOdd = iOdd + iCnt;
      }
    }
    iDiff = iEven - iOdd;
    iNo = iNo / 10;
  }
  return iDiff;
}
int main()
{
  int iValue = 0;
  int iRet = 0;

  printf("Enter number\n");
  scanf("%d",&iValue);

  iRet = CountDiff(iValue);

  printf("%d",iRet);

  return 0;
}