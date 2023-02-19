//Accept N number from user and accept one another number as No, check whether No is presend or not
#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[], int iLength, int iNo) //N
{
    int iCnt = 0;
    
    for(iCnt = 0; iCnt < iLength; iCnt++)
    { 
      if(Arr[iCnt] == iNo)
      {
        return 1;
      }
      else
      {
        return 0;
      }
    }
    
}
int main()
{
  int *p = NULL;
  int iCnt = 0;
  BOOL bRet = FALSE;
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
  bRet = Check(p,iSize,iValue);
  if(bRet == TRUE)
  {
    printf("Number is present");
  }
  else
  {
    printf("Number is absent");
  }
  free(p);
  return 0;
}