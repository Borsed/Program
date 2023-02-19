// Accept character from user and display its ASCII value in decimal. octal, hexadecimal formal
#include<stdio.h>

void Display(char ch) 
{
  int i = 0;
  for(i = 0; i <= ch; i++)
  {
    printf("%c \t %d \t %x \t %o\n",i,i,i,i);
  }
     
}
int main()
{
  char cValue = '\0'; 

  printf("Enter the Character\n");
  scanf("%c",&cValue);

  Display(cValue);

  return 0;
}