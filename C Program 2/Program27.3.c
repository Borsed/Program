// Write program which accept string from user and accept one character Return index of first occurrence of that character
#include<stdio.h>

int FirstChar(char *str, char ch)
{
   int iPos = -1;
  int iCnt = 0;
   for(iCnt = 0; iCnt < *str; iCnt++)
  {
    if(*str == ch)
    {
      iPos = iCnt;    
    }
  }
   
 return iPos;
    
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

   iRet = FirstChar(arr, cValue);
   
   printf("Character location is %d",iRet);
   return 0;
}