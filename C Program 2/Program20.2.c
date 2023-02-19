//Accept number of rows and number of column from user and display below pattern
#include<stdio.h>

void Pattern(int iRow, int iCol) 
{
  int i = 0, j = 0;
  char ch1 = 'A';
  char ch2 = 'a';
  for(i = 1; i <= iRow; i++,ch1++,ch2++)
  {
    for(j = 1; j <= iCol; j++)
    {
      if((ch1 % 2 == 0)&&(ch2 % 2 == 0))
      {
         printf("%c\t",ch2);
      }
      else 
      {
        printf("%c\t",ch1);
      }
    }
    printf("\n");
    }
  
}
int main()
{
  int iValue1 = 0, iValue2 = 0;

  printf("Enter number of rows and column\n");
  scanf("%d%d",&iValue1, &iValue2);

  Pattern(iValue1, iValue2);

  return 0;
}