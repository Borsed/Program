// write program which accept number from user and Count frequency of 2 in it
#include<stdio.h>

int CountTwo(int iNo) //N
{
  int iCnt = 0;
  int iCount = 0;
 for(iCnt = 0; iCnt <= iNo; iCnt++)
  {
    if(iCnt == 2)
    {
      iCount++;
    }
  }
  return iCount;
}
int main()
{
  int iValue = 0;
  int iRet = 0;

  printf("Enter number\n");
  scanf("%d",&iValue);

  iRet = CountTwo(iValue);

  printf("%d",iRet);

  return 0;
}