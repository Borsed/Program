//Accept N number from user and accept one another number as No, return index of Last occurrence of that No
#include<stdio.h>
#include<stdlib.h>

int LastOcc(int Arr[], int iLength, int iNo) //N
{
 int iCnt = 0;
  for(iCnt = iLength-1; iCnt >= 0; iCnt--)
  {
    if(Arr[iCnt] == iNo)
    {
      break;
    }
  }
    if(iCnt == -1)
    {
      return -1;
    }
    else
    {
      return iCnt;
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
  iRet = LastOcc(p,iSize,iValue);
  if(iRet == -1)
  {
    printf("There is no such number");
  }
  else
  {
    printf("Last occurance of number is %d",iRet);
  }
  free(p);
  return 0;
}