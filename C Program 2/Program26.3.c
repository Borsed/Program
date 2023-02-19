// Write program which accept string from user and toggle case
#include<stdio.h>

void strtogglex(char *str) 
{
  while(*str != '\0')
   {
     if((*str >= 'a')&&(*str <= 'z'))
      {
         *str = *str - 32;
      }
      else if((*str >= 'A')&&(*str <= 'Z'))
      {
         *str = *str + 32;
      }
    *str++;
   }
}
int main()
{
  char arr[20];

  printf("Enter the string\n");
  scanf("%[^'\n]s",arr);

  strtogglex(arr);

 printf("Modified string is :  %s\n",arr);

  return 0;
}