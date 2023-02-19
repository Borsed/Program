//accept the string from user and covert toggle case
#include<stdio.h>

void ToggleX(char *str)
{
   while(*str != '\0')
   {
      if((*str >= 'A')&&(*str <= 'Z'))
      {
         *str = *str + 32;
      }
      else if((*str >= 'a')&&(*str <= 'z'))
      {
         *str = *str - 32;
      }
      str++;
   }
}
int main()
{
   char Arr[20];

   printf("Please enter string\n");
   scanf("%[^'\n']s",Arr);

   ToggleX(Arr);

   printf("String after conversion is : %s\n",Arr);

   return 0;
}