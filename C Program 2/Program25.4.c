// Write program which accept string from user and check whether it contain vowels in it or not
#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0


BOOL ChkVowel(char *str) 
{
  
   while(*str != '\0')
   {
  if(*str =='a'||*str =='e'||*str =='i'||*str =='o'||*str =='u')
  {
    return 1;
  }
  else
  {
    return 0;
  }
   }
}
int main()
{
  char arr[20];
  BOOL bRet = FALSE; 

  printf("Enter the string\n");
  scanf("%[^'\n]s",arr);

  bRet = ChkVowel(arr);
  if(bRet == TRUE)
  {
    printf("Contain Vowel");
  }
  else
  {
    printf("There is no vowel");
  }

  return 0;
}