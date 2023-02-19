//Accept character from user and check whether it is chapital or not
#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL ChkChapital(char ch) 
{
    
      if((ch >= 'A') && (ch <= 'Z'))
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

  bRet = ChkChapital(cValue);

  if(bRet == TRUE)
  {
    printf("It is Chapital character");
  }
  else
  {
    printf("It is not Chapital character");
  }

  return 0;
}