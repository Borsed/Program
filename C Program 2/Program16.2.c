//Accept N number from user and accept one another number as No, return index of first occurrence of that No
#include<stdio.h>
#include<stdlib.h>

int FirstOcc(int Arr[], int iLength, int iNo) //N
{
   int iCnt = 0;
  for(iCnt = 1; iCnt < iLength; iCnt++)
  {
     if(Arr[iCnt] == iNo)
    {
      return 1;
    }
    else
    {
      return -1;
    }
  }
}
int main()
{
  int *p = NULL;
  int iCnt = 0;
  int iRet = 0;
  int iSize = 0, iValue = 0;

  printf("Enter number of elements :  \n");
  scanf("%d",&iSize);

  printf("Enter number :  \n");
  scanf("%d",&iValue);

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
  iRet = FirstOcc(p,iSize,iValue);
  if(iRet == -1)
  {
    printf("There is no such number");
  }
  else
  {
    printf("First occurance of number is %d",iRet);
  }
  free(p);
  return 0;
}