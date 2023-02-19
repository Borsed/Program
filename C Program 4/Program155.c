//accept the string from user Aa well as second string and copy to full string data convert empty string
#include<stdio.h>
void StrcpyX(char *src, char *dest)
{
   while(*src != '\0')
   {
      *dest = *src;
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

   StrcpyX(Arr,Brr); 

   printf("Copied string is : %s\n",Brr);

   return 0;
}