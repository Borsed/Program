//Accept number from user and display below pattern 
#include<stdio.h>

void Pattern(int iNo) 
{
  int iCnt = 0;
  char ch = 'A';

  if(iNo < 0)  //updater 
  {
    iNo = -iNo;
  }
  for(iCnt = 1; iCnt <= iNo; iCnt++, ch++)
  {
    printf("%c\t",ch);  // Dynamic
    
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