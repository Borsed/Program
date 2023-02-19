//Accept one number from user pattern printing

#include<stdio.h>

void Display(int iNo) 
{
  int iCnt = 0;
  char ch = 'A';

  if(iNo < 0)  //updater 
  {
    iNo = -iNo;
  }
  for(iCnt = 1; iCnt <= iNo; iCnt++)
  {
    printf("%c\t",ch);  // Dynamic
    ch++;
  }
 
}
int main()
{
  int iValue = 0;

  printf("Enter number\n");
  scanf("%d",&iValue);

  Display(iValue);

  return 0;
}