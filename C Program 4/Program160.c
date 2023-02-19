//accept the string from user Aa well as second string and copy by converting toggle
#include<stdio.h>
void StrcpyToggleX(char *src, char *dest)
{
   while(*src != '\0')
   {
     if((*src >= 'A')&&(*src <= 'Z'))
      {
         *dest = *src + 32;
      }
      else if((*src >= 'a')&&(*src <= 'z'))
      {
         *dest = *src - 32;
      }
      else
      {
         *dest = *src;
      }
      src++;
      dest++;
   }
   *dest = '\0';
}
int main()
{
   char Arr[20];
   char Brr[20];
  

   printf("Please enter string\n");
   scanf("%[^'\n']s",Arr);

   StrcpyToggleX(Arr,Brr); 

   printf("Copied string is : %s\n",Brr);
   printf("Original string is : %s\n",Arr);

   return 0;
}