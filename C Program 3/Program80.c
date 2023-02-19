//Accept N number as well as another number accept one check whether that number is presend in array or not
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckOccurance(int Arr[], int iSize, int iNo) 
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
      return false;
    }
    else
    {
      return true;
    }
    
  

}
int main()
{
  int *ptr = NULL;
  int iLength = 0, i = 0;
  int iValue = 0;
  bool bRet = false;
  
  printf("Enter of element : \n");
  scanf("%d",&iLength);

  ptr = (int *)malloc(iLength * sizeof(int));

  printf("Enter the element : \n");
  for(i = 0; i < iLength; i++)
  {
    scanf("%d",&ptr[i]);
  }
  printf("Enter the element of findout the Occurence : \n");
  scanf("%d",&iValue);

  bRet = CheckOccurance(ptr, iLength, iValue);
  if(bRet == true)
  {
    printf("%d is Occured in the array\n",iValue);
  }
  else
  {
     printf("%d is no Occured in the array\n",iValue);
  }
  
  
  free(ptr);
  
  return 0;
}