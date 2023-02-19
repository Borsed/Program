// Write program which accept string from user Reverce that string in place
#include<stdio.h>

int StrRevX(char *str)
{
   char *start = str;
   char *end = str;
   char Temp = '\0';

   while(*end != '\0')
   {
      end++;
   }
   end--;
   while(start < end)
   {
      Temp = *start;
      *start = *end;
      *end = Temp;

      start++;
      end--;
   }
}
int main()
{
   char arr[20];
   
   printf("enter string\n");
   scanf("%[^'\n']s",arr);

   StrRevX(arr);
   
   printf("Modified string is %s",arr);
   return 0;
}