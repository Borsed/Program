//Accept N number from user and find out the smallest number from N number 
#include<stdio.h>
#include<stdlib.h>


int Minimum(int Arr[], int iSize)  
{
  int iMin = Arr[0];
  int iCnt = 0;
  for(iCnt = 0; iCnt < iSize; iCnt++) // complexcity(N)
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
  int *ptr = NULL;
  int iLength = 0, i = 0;
  int iRet = 0;
  
  printf("Enter number of element : \n");
  scanf("%d",&iLength);

  ptr = (int *)malloc(iLength * sizeof(int));

  printf("Enter the element : \n");
  for(i = 0; i < iLength; i++)
  {
    scanf("%d",&ptr[i]);
  }
  iRet = Minimum(ptr, iLength);

  printf("Enter the Minimum number : %d\n",iRet);
  
  free(ptr);
  
  return 0;
}