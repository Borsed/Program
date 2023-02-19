// write program which accept number from user and check whether it contains 0 in it or not
#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL ChkZero(int iNo) //N
{
  int iCnt = 0;
  while(iCnt <= iNo)
    if(iNo == 0)
    {
      return 1;
    }
    else 
    {
      return 0;
    }
}

int main()
{
  int iValue = 0;
  BOOL bRet = FALSE;

  printf("Enter number\n");
  scanf("%d",&iValue);

  bRet = ChkZero(iValue);

  if(bRet == TRUE)
  {
    printf("It Contains Zero");
  }
  else
  {
    printf("There is no Zero");
  }
  return 0;
}