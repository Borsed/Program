// write program which accept distance in kilometre and convert it into meter
#include<stdio.h>

int KMtoMeter(int iNo)
{
  
  int iKilometer = 1;
  int iMeter = 1000;
  int iCnt = 1;
  //int iCnt = 1;
  for(iCnt = 1; iCnt <= iNo; iCnt++)
  {
    
      iKilometer = 1000 * iNo;

  }
  return iKilometer;
}
int main()
{
  int iValue = 0, iRet = 0;

  printf("Enter distance \n");
  scanf("%d",&iValue);

  iRet = KMtoMeter(iValue);

  printf("%d",iRet);
  return 0;
}