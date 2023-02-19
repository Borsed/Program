// write program which display ASCII table. Table contain symbol , Decimal, HexaDecimal, and octal representation of every member from 0 to 255
#include<stdio.h>

void DisplayASCII()
{
 int i = 0;
 printf("---------------------------------------------------\n");
 printf("ASCII table\n");
 printf("-----------------------------------------------------\n");
 printf("Character\t Decimal\t Hex\t Octal");
 for(i = 0; i <= 255; i++)
 {
    printf("%c \t %d \t %x \t %o\n",i,i,i,i);
 }
 printf("\n-----------------------------\n");

}
int main()
{
  DisplayASCII();
  return 0;
}