//Recursion
//accept string from user and display letter
#include<stdio.h>

void Display(char *str)
{
  static int iCnt = 0;

  if(*str != '\0')
  {
    printf("%c\n",*str);
    str++;
    Display(str);
  }

}
int main()
{
  char Arr[20];

  printf("Enter string : \n");
  scanf("%[^'\n']s",Arr);

  Display(Arr);

   return 0;
}