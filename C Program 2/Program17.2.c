//Accept N number from user and return the smallest number

#include<stdio.h>
#include<stdlib.h>

int Minimum(int Arr[], int iLength) //N
{
  int iMin = Arr[0];
  int iCnt = 0;
  for(iCnt = 0; iCnt < iLength; iCnt++) // complexcity(N)
  {
    if(Arr[iCnt] < iMin)
    {
      iMin = Arr[iCnt];
    }
  }
    return iMin;
    
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
  iRet = Minimum(p,iSize);
  printf("Smallest number is %d",iRet);

  free(p);
  return 0;
}