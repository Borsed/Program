// write program which accept radius of circle from user and calculate its area consider value of PI as 3.14
#include<stdio.h>

double CircleArea(float fRadius)
{
  
  float PI = 3.14;
  float fArea = 0.0;
  float iCnt = 0;
  for(iCnt = 1; iCnt <= fRadius; iCnt++)
  {
    fArea = PI * fRadius * fRadius;
  }
  return fArea;
}
int main()
{
  float fValue = 0.0;
  double dRet = 0.0;

  printf("Enter radius");
  scanf("%f",&fValue);

  dRet = CircleArea(fValue);

  printf("%f",dRet);
  return 0;
}