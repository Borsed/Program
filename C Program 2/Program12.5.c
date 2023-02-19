// write program which accept number from user and count frequency of such a digit whivh are less than 6
#include<stdio.h>

int Count(int iNo) //N
{
  int iCnt = 0;
  for(iCnt = 1; iCnt <= iNo; iCnt++)  
  

}
  

int main()
{
  int iValue = 0, iRet = 0;

  printf("Enter number\n");
  scanf("%d",&iValue);

  iRet = Count(iValue);

    printf("%d".iRet);
  
  return 0;
}