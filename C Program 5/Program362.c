//Iteration
//accept string from user and return length of the string 
#include<stdio.h>

int strlenI(char *str)
{
  int iCnt = 0;

  while(*str != '\0')
  {
    iCnt++;
    str++;
  }
  return iCnt;
}
int main()
{
  char Arr[20];
  int iRet = 0;

  printf("Enter string : \n");
  scanf("%[^'\n']s",Arr);

  iRet = strlenI(Arr);

  printf("string length is : %d\n",iRet);

   return 0;
}