//Accept N number as well as another number accept one check whether that number is first number in array or not
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int CheckOccurance(int Arr[], int iSize, int iNo) 
{
  int iCnt = 0;
  for(iCnt = 0; iCnt < iSize; iCnt++)
  {
    if(Arr[iCnt] == iNo)
    {
      break;
    }
  }
  if(iCnt == iSize)
  {
    return -1;
  }
  else
  {
    return iCnt;
  }

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
  printf("Enter the element of findout the index of first occurance : \n");
  scanf("%d",&iValue);

  iRet = CheckOccurance(ptr, iLength, iValue);
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