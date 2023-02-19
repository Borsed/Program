//Accept number from user and display below pattern 
#include<stdio.h>

void Pattern(int iNo) 
{
  int iCnt = 0;
  for(iCnt = 1; iCnt < iNo; iCnt++)
  {
     printf("%d\t",2 * (iCnt+1) );  // Dynamic
  }
}
int main()
{
  int iValue = 0;

  printf("Enter number\n");
  scanf("%d",&iValue);

  Pattern(iValue);

  return 0;
}