//Formate
#include<stdio.h>
#include<stdlib.h>
          (int Arr[], int iSize)
{

}
int main()
{
  int *ptr = NULL;
  int iLength = 0,i = 0, iRet = 0;

  printf("Enter of element : \n");
  scanf("%d",&iLength);

  ptr = (int *)malloc(iLength * sizeof(int));

  printf("Enter the element : \n");
  for(i = 0; i < iLength; i++)
  {
    scanf("%d",&ptr[i]);
  }
       =        (ptr, iLength)
  
  return 0;
}