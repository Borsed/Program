//accept the string from user and covert capital letter of string from small letter 
#include<stdio.h>

void StrlwrX(char *str)
{
   while(*str != '\0')
   {
      if((*str >= 'A')&&(*str <= 'Z'))
      {
         *str = *str +32;
      }
      str++;
   }
}
int main()
{
   char Arr[20];

   printf("Please enter string\n");
   scanf("%[^'\n']s",Arr);

   StrlwrX(Arr);

   printf("String after conversion is : %s\n",Arr);

   return 0;
}