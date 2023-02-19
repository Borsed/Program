//Accept N number from user check whether that numbers contains 11 in it or not
#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[], int iLength) //N
{
    int iCnt = 0;
    
    for(iCnt = 0; iCnt < iLength; iCnt++)
    { 
      if(Arr[iCnt] == 11)
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
  bRet = Check(p,iSize);
  if(bRet == TRUE)
  {
    printf("11 is present");
  }
  else
  {
    printf("11 is absent");
  }
  free(p);
  return 0;
}