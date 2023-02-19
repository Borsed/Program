// write program which accept width & height of rectangle  from user and calculate its area 
#include<stdio.h>

double RectArea(float fWidth, float fHeight)
{
  
  float fArea = 0.0;
  float iCnt = 0;
  for(iCnt = 1; iCnt <= fWidth; iCnt++)
  {
    fArea = fWidth * fHeight;
  }
  return fArea;
}
int main()
{
  float fValue1 = 0.0;
  float fValue2 = 0.0;
  double dRet = 0.0;

  printf("Enter Width");
  scanf("%f",&fValue1);

  printf("Enter Height");
  scanf("%f",&fValue2);

  dRet = RectArea(fValue1, fValue2);

  printf("%f",dRet);
  return 0;
}