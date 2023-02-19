// Write program which accept string from user and accept one character Return index of first occurrence of that character
#include<stdio.h>

int LastChar(char *str, char ch)
{
  int iCnt = 0;
  for(iCnt = ch-1; iCnt >= 0; iCnt--)
  {
    if(*str == iCnt)
    {
      break;
    }
  }
   
 return iCnt;
    
}
int main()
{
   char arr[20];
   char cValue;
   int iRet = 0;

   printf("enter string\n");
   scanf("%[^'\n']s",arr);

   printf("enter the character\n");
   scanf(" %c",&cValue);

   iRet = LastChar(arr, cValue);
   
   printf("Character location is %d",iRet);
   return 0;
}