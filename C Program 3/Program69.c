//Accept N number from user and perform the addition of that N number(Iteration approach)
#include<stdio.h>
#include<stdlib.h>
int main()
{
  int Arr[5];
  int iCnt = 0;

  printf("Enter the elements : \n");

  for(iCnt = 0; iCnt < 5; iCnt++)
  {
    scanf("%d",&Arr[iCnt]);
  }
  printf("Element from array are : \n");
  
  for(iCnt = 0; iCnt < 5; iCnt++)
  {
    printf("%d\n",Arr[iCnt]);
  }
  return 0;
}