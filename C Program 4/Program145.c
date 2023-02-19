//accept the string from user as well as accept one character check wether character is presend or not
#include<stdio.h>
#include<stdbool.h>
bool Check(char *str, char ch)
{
   bool bFlag = false;

   while(*str != '\0')
   {
      if(*str == ch)
      {
         bFlag = true;
        break;
      }
      str++;
   }
   return bFlag;
}

int main()
{
   char Arr[10];
   char cValue = '\0';
   bool bRet = false;
   
   printf("Please enter string\n");
   scanf("%[^'\n']s",Arr);

   printf("Enter the character\n");
   scanf(" %c",&cValue);  // --%c

   bRet = Check(Arr, cValue);

   if(bRet == true)
   {
      printf("Character is presend in the string\n");
   }
   else
   {
      printf("Character is not presend in the string\n");

   }
    return 0;
}