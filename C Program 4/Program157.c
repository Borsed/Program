//accept the string from user Aa well as second string and copy by converting small character into chapital letter
#include<stdio.h>
void StrcpyCapX(char *src, char *dest)
{
   while(*src != '\0')
   {
      if((*src >= 'a')&&(*src <= 'z'))
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

   StrcpyCapX(Arr,Brr); 

   printf("Copied string is : %s\n",Brr);

   return 0;
}