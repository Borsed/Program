// write program which accept rang from user and return addition of all even numbers in between that range
#include<stdio.h>

int RangeSumEven(int iStart, int iEnd) //N
{
  int iSum = 0;
  int iCnt = 0;
  for(iCnt = iStart; iCnt <= iEnd; iCnt++)
  if(iCnt % 2 == 0)
  {
    iSum = iSum + iCnt;
  }
  return iSum;
}
int main()
{
  int iValue1 = 0, iValue2 = 0, iRet = 0;

  printf("Enter starting point\n");
  scanf("%d",&iValue1);

  printf("Enter ending point\n");
  scanf("%d",&iValue2);

  iRet = RangeSumEven(iValue1, iValue2);
  printf("Addition is %d",iRet);

  return 0;
}