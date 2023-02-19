//accept the string from user Aa well as second string and copy by converting capital to small
#include<stdio.h>
void StrcpySmallX(char *src, char *dest)
{
   while(*src != '\0')
   {
     if((*src >= 'A')&&(*src <= 'Z'))
      {
         *dest = *src + 32;
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

   StrcpySmallX(Arr,Brr); 

   printf("Copied string is : %s\n",Brr);
   printf("Original string is : %s\n",Arr);

   return 0;
}