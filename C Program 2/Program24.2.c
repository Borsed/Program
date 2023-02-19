// Accept character from user it character is small display its corresponding capital character, 
//and if it small then display its corresponding capital. In other case display as it is.
#include<stdio.h>
char Display(char ch)
{
   if((ch >= 'a')&&(ch <='z'))
   {
      return ch - 32;
   }
   else if((ch >= 'A')&&(ch <='Z'))
   {
      return ch + 32;
   }
   else
   {
      return ch;
   }
}

int main()
{
   char cValue = '\0';
   char cRet = '\0';

   printf("Enter the character\n");
   scanf("%c",&cValue);

   cRet = Display(cValue);

   printf("Character is : %c\n",cRet);

   return 0;
}
