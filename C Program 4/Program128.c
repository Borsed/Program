// accept character from user and check chapital
#include<stdio.h>
#include<stdbool.h>

bool IsChapitalX(char ch)
{
   if((ch >= 'A') && (ch <= 'Z'))
   {
      return true;
   }
   else
   {
      return false;
   }
}

int main()
{
   char cValue = '\0';
   bool bRet = false;
   printf("please enter one character\n");
   scanf("%c",&cValue);
 
   bRet = IsChapitalX(cValue);
   if(bRet == true)
   {
      printf("%c is a Chapital case letter\n",cValue);
   }
   else
   {
      printf("%c is not a Chapital case letter\n",cValue);
   }
   return 0;
}