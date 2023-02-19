//Accept N number from user and accept range, Display all element from that range
#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[], int iLength, int iStart, int iEnd) //N
{
 int iCnt = 0;
  for(iCnt = 0; iCnt < iLength; iCnt++)
  {
    if((iStart <= Arr[iCnt])&&(iEnd >= Arr[iCnt]))
    {
      printf("%d",Arr[iCnt]);
    }
  }
    
}
int main()
{
  int *p = NULL;
  int iCnt = 0;
  int iRet = 0;
  int iSize = 0, iValue1 = 0, iValue2 = 0;

  printf("Enter number :  \n");
  scanf("%d",&iSize);

  printf("Enter the Starting Point :  \n");
  scanf("%d",&iValue1);

  printf("Enter the ending point :  \n");
  scanf("%d",&iValue2);

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

  Range(p, iSize, iValue1, iValue2);

  free(p);
  return 0;
}