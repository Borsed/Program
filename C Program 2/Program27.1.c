// Write program which accept string from user and accept one character. check whether that character is present in string or not
#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL; 

BOOL ChkChar(char *str, char ch)
{
  while(*str != '\0')
   {
      if(*str == ch)
      {
        break;
      }
      str++;
   }
   if(*str == '\0')
   {
      return FALSE;
   }
   else
   {
      return TRUE;
   }
}
int main()
{
   char arr[20];
   char cValue;
   BOOL bRet = FALSE;

   printf("enter string\n");
   scanf("%[^'\n']s",arr);

   printf("enter the character\n");
   scanf(" %c",&cValue);

   bRet = ChkChar(arr, cValue);
   if(bRet == TRUE)
   {
      printf("Character found");
   }
   else
   {
      printf("Character not found");
   }
   
   return 0;
}