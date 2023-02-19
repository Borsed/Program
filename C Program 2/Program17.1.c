//Accept N number from user and return the largest number

#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[], int iLength) //N
{
  int iMax = Arr[0];
  int iCnt = 0;
  for(iCnt = 0; iCnt < iLength; iCnt++) // complexcity(N)
  {
    if(Arr[iCnt] > iMax)
    {
      iMax = Arr[iCnt];
    }
  }
  return iMax;
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
  iRet = Maximum(p,iSize);
  printf("Largest number is %d",iRet);

  free(p);
  return 0;
}