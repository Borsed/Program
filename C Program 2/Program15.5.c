//Accept N number from user and accept one another number as No, return frequency of No form it
#include<stdio.h>
#include<stdlib.h>

int Check(int Arr[], int iLength, int iNo) 
{
    int iCnt = 0;
    int iFreq = 0;
    
    for(iCnt = 0; iCnt < iLength; iCnt++)
    { 
     if(Arr[iCnt] == iNo)
      {
        iFreq++;
      }
    }
    return iFreq;
}
int main()
{
  int *p = NULL;
  int iCnt = 0;
  int iRet = 0, iValue = 0;
  int iSize = 0;

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
  iRet = Check(p,iSize,iValue);
 
  printf("%d",iRet);
  
  free(p);
  return 0;
}