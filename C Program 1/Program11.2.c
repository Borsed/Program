// write program which accept rang from user and display all even numbers in between that range
#include<stdio.h>

void RangeDisplayEven(int iStart, int iEnd) //N
{
  int iCnt = 0;
  for(iCnt = iStart; iCnt <= iEnd; iCnt++)
  if(iCnt % 2 == 0)
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

  RangeDisplayEven(iValue1, iValue2);

  return 0;
}