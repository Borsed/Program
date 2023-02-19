// write program which accept tempreture in Fahrenheit and convert it into ceisius.
#include<stdio.h>

double FhtoCs(float fTemp)
{
  
  float fFahrenheit = 0.0;
  float fCeisius = 1.0;
  float iCnt = 1;
  while(iCnt <= fTemp)
  {
     fCeisius = (fTemp - 32) * (5 / 9); 
     iCnt++;
  }
  
  return fCeisius;
}
int main()
{
  float fValue = 0.0;
  double dRet = 0.0;

  printf("Enter tempure in fahrenheit\n");
  scanf("%d",&fValue);

  dRet = FhtoCs(fValue);

  printf("%f",dRet);
  return 0;
}