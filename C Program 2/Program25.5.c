// Write program which accept string from user and display it in reverse order
#include<stdio.h>

void Reverce(char *str) 
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

  printf("Enter the string\n");
  scanf("%[^'\n]s",arr);

  Reverce(arr);
  printf("Reverce string is :%s\n",arr);

  return 0;
}