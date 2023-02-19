//Accept N number from user and return product of all odd elements
#include<stdio.h>
#include<stdlib.h>

int Product(int Arr[], int iLength) //N
{
 int iCnt = 0;
 int iProduct = 1;
  for(iCnt = 0; iCnt < iLength; iCnt++)
  {
    if(Arr[iCnt] % 2 != 0)
    {
      iProduct = iProduct * Arr[iCnt];
    }
  }
    return iProduct;
}
int main()
{
  int *p = NULL;
  int iCnt = 0, iRet = 0;
  int iSize = 0, iValue = 0;

  printf("Enter number of element :  \n");
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

  iRet = Product(p, iSize);

  printf("Product is %d",iRet);

  free(p);
  return 0;
}