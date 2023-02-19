
// write program which accept number from user and count frequency of 4 in it
#include<stdio.h>

int CountFour(int iNo) //N
{
  int iFrequency = 0;
  int iCnt = 0;
  while(iNo > 0)  
  {
    iCnt = iNo % 10;
    if(iNo == 4)
   {
    iFrequency++;
   }
  }
  
return iFrequency;
}
  

int main()
{
  int iValue = 0, iRet = 0;

  printf("Enter number\n");
  scanf("%d",&iValue);

  iRet = CountFour(iValue);

    printf("%d",iRet);
  
  return 0;
}