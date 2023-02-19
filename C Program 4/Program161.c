//accept the string from user and reverce of string 
//input : ABCDE
//Output : DECBA
#include<stdio.h>

void strrevX(char *str)
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
   char Arr[20];
   
   printf("Please enter string\n");
   scanf("%[^'\n']s",Arr);

   strrevX(Arr);

   printf("Reverce string is :%s\n",Arr);
   
   return 0;
}