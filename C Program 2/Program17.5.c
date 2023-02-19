//Accept N number from user and display summation of digits of each number

#include<stdio.h>
#include<stdlib.h>

void DigitsSum(int Arr[], int iLength) //N
{
  
 
  int iCnt = 0;
  int iSum = 0;

  for(iCnt = 0;iCnt < iLength;iCnt++)
  {
    
    if(iLength == 0)
    { 
      iSum = iSum + iLength;
      
    }
   
    
  }
 printf("%d",iSum);
}
int main()
{
  int *p = NULL;
  
  int iCnt = 0;
  int iRet = 0;
  int iSize = 0;

  printf("Enter number of elements :  \n");
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
  DigitsSum(p,iSize);

  free(p);
  return 0;
}