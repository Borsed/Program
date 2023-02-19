//Recursion
//accept array and addition of all the element of array
#include<stdio.h>

int AdditionR(int Arr[], int iSize)
{
  static int iCnt = 0;
  static int Sum = 0;

  if(iCnt < iSize)
  {
     Sum = Sum + Arr[iCnt];
     iCnt++;
     AdditionR(Arr,iSize);
  }
  return Sum;
}
int main()
{
  int Arr[5] = {10,20,30,40,50};
  int iRet = 0;

  iRet = AdditionR(Arr,5);
  printf("Addition of Array is %d",iRet);

   return 0;
}