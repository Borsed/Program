//Accept number from user and display below pattern 
#include<stdio.h>

void Pattern(int iNo) 
{
  int iCnt = 0;
  if(iNo < 0)  //updater 
  {
    iNo = -iNo;
  }
   for(iCnt = iNo; iCnt >= 1; iCnt--)
   {
    printf("%d\t",iCnt);  // Dynamic
    printf("#\t");   // Static
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