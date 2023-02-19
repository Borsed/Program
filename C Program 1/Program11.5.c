// write program which accept rang from user and display all number in between that range in reverce order
#include<stdio.h>

void RangeDisplayRev(int iStart, int iEnd) //N
{
  int iCnt = 0;
  for(iCnt = iEnd; iCnt >= iStart; iCnt--)
  {
      printf("%d\t",iCnt);
  }

}
int main()
{
  int iValue1 = 0, iValue2 = 0;

  printf("Enter starting point\n");
  scanf("%d",&iValue1);

  printf("Enter ending point\n");
  scanf("%d",&iValue2);

  RangeDisplayRev(iValue1, iValue2);

  return 0;
}