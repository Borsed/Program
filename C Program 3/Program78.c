//Accept N number as well as another number of user and count frequency of number in array
#include<stdio.h>
#include<stdlib.h>
int CalculateFrequency(int Arr[], int iSize, int iNo)
{
  int iCnt = 0, iFrequency = 0; 
  for(iCnt = 0; iCnt < iSize; iCnt++)
  {
    if(Arr[iCnt] == iNo)
    {
      iFrequency++;
    }
    
  }
   return iFrequency;
}
int main()
{
  int *ptr = NULL;
  int iLength = 0, i = 0, iRet = 0, iValue = 0;

  printf("Enter of element : \n");
  scanf("%d",&iLength);

  ptr = (int *)malloc(iLength * sizeof(int));

  printf("Enter the element : \n");
  for(i = 0; i < iLength; i++)
  {
    scanf("%d",&ptr[i]);
  }
  printf("Enter the element of findout the frequency : \n");
  scanf("%d",&iValue);

  iRet = CalculateFrequency(ptr, iLength, iValue);
  printf("Frequency of %d is %d\n",iValue,iRet);
  
  return 0;
}