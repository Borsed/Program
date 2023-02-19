// write program which accept number from user and return the count of even
#include<stdio.h>

int CountEven(int iNo) //N
{
  int iCount = 0;
  int iCnt = 0;

  while(iCnt < iNo)
  {
    int iCnt = iNo % 10;
    if(iNo % 2 == 0)
    {
      
      iCount++;
    }
    iNo = iNo / 10;
  }
  return iCount;
}
int main()
{
  int iValue = 0;
  int iRet = 0;

  printf("Enter number\n");
  scanf("%d",&iValue);

  iRet = CountEven(iValue);

  printf("%d",iRet);

  return 0;
}