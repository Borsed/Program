//Accept one number from user pattern printing  // optimazation  
//ROW 4
//COLUMNS 4
/*
  
  *
  * *
  * * *
  * * * *

*/
#include<stdio.h>

void Display(int iRow, int iCol) 
{
  int i = 0, j = 0;
  if(iRow < 0)
  {
    iRow = -iRow;
  }
  if(iCol < 0)
  {
    iCol = -iCol;
  }
  if(iRow != iCol)
  {
    printf("Row number and colomn number are different\n");
    return;
  }

  for(i = 1; i <= iRow; i++)
  {
    for(j = 1; j <= i; j++)
    {   
        printf("*\t");
    }
    printf("\n");
  }

}
int main()
{
  int iValue1 = 0, iValue2 = 0;

  printf("Enter number of rows\n");
  scanf("%d",&iValue1);

  printf("Enter number of coloumn\n");
  scanf("%d",&iValue2);

  Display(iValue1, iValue2);

  return 0;
}