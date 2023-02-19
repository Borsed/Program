//Accept N number from user and display all such elements which are divisible by 5
#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iLength) //N
{
    int iCnt = 0;
    
    for(iCnt = 0; iCnt < iLength; iCnt++)
    { 
    if(Arr[iCnt] % 5 == 0)
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
  Display(p,iSize);

  free(p);
  return 0;
}