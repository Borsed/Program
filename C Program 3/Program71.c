//Accept N number from user and perform the addition of that N number
#include<stdio.h>
#include<stdlib.h>
int Summation(int Arr[], int iSize)
{
  int iCnt = 0;
  int iSum = 0;
  for(iCnt = 0; iCnt < iSize; iCnt++)
  {
    iSum = iSum + Arr[iCnt];
  }
  return iSum;
}
int main()
{
  int *ptr = NULL;
  int iCnt = 0;
  int iRet = 0;
  int iLength = 0;

  printf("Enter number of elements you want to store :  \n");
  scanf("%d",&iLength);

  ptr = (int *)malloc(iLength * sizeof(int));

  printf("Enter the elements : \n");

  for(iCnt = 0; iCnt < iLength; iCnt++)
  {
    scanf("%d",&ptr[iCnt]);
  }
  printf("Element from array are : \n");
  
  for(iCnt = 0; iCnt < iLength; iCnt++)
  {
    printf("%d\n",ptr[iCnt]);
  }
  iRet = Summation(ptr,iLength);

  printf("Addition of all element is : %d\n",iRet);

  free(ptr);
  return 0;
}