//Accept N number from user and find reverce number from N number 
#include<stdio.h>
#include<stdlib.h>


void DisplayReverce(int Arr[], int iSize)  
{
  int iCnt = 0;
  for(iCnt = iSize-1; iCnt >= 0; iCnt--) 
  {
    printf("%d\n",Arr[iCnt]);
  }
    
}
int main()
{
  int *ptr = NULL;
  int iLength = 0, i = 0;
  
  
  printf("Enter number of element : \n");
  scanf("%d",&iLength);

  ptr = (int *)malloc(iLength * sizeof(int));

  printf("Enter the element : \n");
  for(i = 0; i < iLength; i++)
  {
    scanf("%d",&ptr[i]);
  }
  printf("Enter the reverce element : \n");
  DisplayReverce(ptr, iLength);

  
  
  free(ptr);
  
  return 0;
}