// Accept character from user and check whether it is special symbol or not(!,@,#,$,%,^,&,*)
#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL ChkSpecial(char ch) 
{
    
     if((ch >= '!') && (ch <= '*'))
      {
        return 1;
      }
      else
      {
         return 0;
      }

     
}
int main()
{
  char cValue = '\0';
  BOOL bRet = FALSE; 

  printf("Enter the Character\n");
  scanf("%c",&cValue);

  bRet = ChkSpecial(cValue);

  if(bRet == TRUE)
  {
    printf("It is Special character");
  }
  else
  {
    printf("It is not Special Character");
  }

  return 0;
}