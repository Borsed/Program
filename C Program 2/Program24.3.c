// Accept character from user it character is small display its corresponding capital character, 
//and if it small then display its corresponding capital. In other case display as it is.
#include<stdio.h>
void Display(char ch)
{
   if((ch >= 'A')&&(ch <='Z'))
   {
      printf("%c",ch);
   }
   else if((ch >= 'a')&&(ch <='z'))
   {
      printf("%c",-ch);
   }
}

int main()
{
   char cValue = '\0';

   printf("Enter the character\n");
   scanf("%c",&cValue);

   Display(cValue);

   return 0;
}
