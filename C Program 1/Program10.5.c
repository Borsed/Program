// write program which accept area in square feet and convert it into square meter 
#include<stdio.h>

double SquareMeter(int iValue)
{
  
  int iSquareFeet = 1;
  int iSquareMeter = 0.0929;
  int iCnt = 0;
  for(iCnt = 1; iCnt <= iValue; iCnt++)
  {
    iSquareMeter = 0.0929 * iValue;
  }
  return iSquareMeter;
}
int main()
{
  int iValue = 0;
  double dRet = 0.0;

  printf("Enter area in square feet\n");
  scanf("%d",&iValue);

  dRet = SquareMeter(iValue);

  printf("%d",dRet);
  return 0;
}