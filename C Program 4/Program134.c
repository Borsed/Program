//accept the string for user and calculate the letter
#include<stdio.h>
int StrlenX(char *str)
{
   int iCnt = 0;
   while(*str != '\0')
   {
      iCnt++;
      str++;
   }
   return iCnt;
}

int main()
{
   char Arr[20];
   int iRet = 0;
   
   printf("Please enter string\n");
   scanf("%[^'\n']s",Arr);

   iRet = StrlenX(Arr);

   printf("Number of characters are %d\n",iRet);
   
   return 0;
}