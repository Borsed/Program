//Accept N number from user and perform the addition of even element and odd element
#include<stdio.h>
#include<stdlib.h>
void DisplayEvenOddSum(int Arr[], int iSize)
{
  int iCnt = 0, iEvenSum = 0, iOddSum= 0;
  for(iCnt = 0; iCnt < iSize; iCnt++)
  {
    if((Arr[iCnt] % 2) == 0)
    {
      iEvenSum = iEvenSum + Arr[iCnt];
    }
    else
    {
      iOddSum = iOddSum + Arr[iCnt];
    }
    
  }
  printf("Number of even element are : %d\n",iEvenSum);
  printf("Number of Odd element are : %d\n",iOddSum);
}
int main()
{
  int *ptr = NULL;
  int iLength = 0,i = 0;

  printf("Enter of element : \n");
  scanf("%d",&iLength);

  ptr = (int *)malloc(iLength * sizeof(int));

  printf("Enter the element : \n");
  for(i = 0; i < iLength; i++)
  {
    scanf("%d",&ptr[i]);
  }
  DisplayEvenOddSum(ptr, iLength);
  
  return 0;
}