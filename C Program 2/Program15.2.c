//Accept N number from user and return diffrent between frequency of even numbers and odd numbers
#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength) //N
{
    int iCnt = 0;
    int iEven = 0;
    int iOdd = 0;
    int iDiff = 0;
    
    for(iCnt = 0; iCnt < iLength; iCnt++)
    { 
      if(Arr[iCnt] % 2 == 0)
      {
        iEven++;
      }
      else
      {
        iOdd++;
      }
    }
    iDiff = iEven - iOdd;
    return iDiff;
}
int main()
{
  int *p = NULL;
  int iCnt = 0;
  int iRet = 0;
  int iSize = 0;

  printf("Enter number of elements :  \n");
  scanf("%d",&iSize);

  p = (int *)malloc(iSize * sizeof(int));
  if(p == NULL)
  {
    printf("Unable to allocated memory");
    return -1;
  }

  printf("Enter %d elements",iSize);

  for(iCnt = 0; iCnt < iSize; iCnt++)
  {
    printf("Enter elements : %d",iCnt+1);
    scanf("%d",&p[iCnt]);
  }
  iRet = Frequency(p,iSize);

  printf("Result is %d",iRet);

  free(p);
  return 0;
}