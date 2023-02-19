//Accept N number from user and count number of and count even number of element and odd number element
#include<stdio.h>
#include<stdlib.h>
void DisplayEvenOdd(int Arr[], int iSize)
{
  int iCnt = 0, iEvenCnt = 0, iOddCnt = 0;
 
  for(iCnt = 0; iCnt < iSize; iCnt++)
  {
    if((Arr[iCnt] % 2) == 0 )
    {
      iEvenCnt++;
    }
    else
    {
      iOddCnt++;
    }
   
  }
   printf("Number of even element are : %d\n",iEvenCnt);
   printf("Number of Odd element are : %d\n",iOddCnt);
    
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
  DisplayEvenOdd(ptr, iLength);
  free(ptr);
  
  return 0;
}