// Write program which accept string from user and return difference between frequency of small characters and frequency of capital character
#include<stdio.h>

int Difference(char *str) 
{
  int iCapital = 0;
  int iSmall = 0;
  int iFreq = 0;
   while(*str != '\0')
   {
     if((*str >= 'a') && (*str <= 'z'))
      {
        iSmall++;
      }
      else if((*str >= 'A') && (*str <= 'Z'))
      {
        iCapital++;
      }
      
      str++;
   }
   iFreq = iSmall - iCapital;
   return iFreq;
}
int main()
{
  char arr[20];
  int iRet = 0; 

  printf("Enter the string\n");
  scanf("%[^'\n]s",arr);

  iRet = Difference(arr);

 printf("%d",iRet);

  return 0;
}