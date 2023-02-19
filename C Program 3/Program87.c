//Accept N number as well as accept one another number and return first occurance number
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int CheckFirstOccurance(int Arr[], int iSize, int iNo) 
{
  int iPos = -1, iCnt = 0;
  for(iCnt = 0; iCnt < iSize; iCnt++)
  {
    if(Arr[iCnt] == iNo)
    {
      iPos = iCnt;    
    }
  }
   
 return iPos;
    
}
int main()
{
  int *ptr = NULL;
  int iLength = 0, i = 0;
  int iValue = 0;
  int iRet = 0;
  
  printf("Enter of element : \n");
  scanf("%d",&iLength);

  ptr = (int *)malloc(iLength * sizeof(int));

  printf("Enter the element : \n");
  for(i = 0; i < iLength; i++)
  {
    scanf("%d",&ptr[i]);
  }
  printf("Enter the element of findout the last occurance : \n");
  scanf("%d",&iValue);

  iRet = CheckFirstOccurance(ptr, iLength, iValue);
  if(iRet == -1)
  {
    printf("There is no %d in the array\n",iValue);
  }
  else
  {
     printf("%d is Occured in the array at index %d\n",iValue,iRet);
  }
  
  
  free(ptr);
  
  return 0;
}