//Accept one number from user pattern printing
//4
//A B C D 
#include<stdio.h>

void Display(int iNo) 
{
  int iCnt = 0;
  char ch = 'a';

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

  Display(iValue);

  return 0;
}