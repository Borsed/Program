//Write a program which accept one number from user and print that number of even number on screen
#include<stdio.h>
void PrintEven(int iNo)
{
  if(iNo <= 0)
  {
    return;
  }

 int iCnt = 1;
 iNo = 2*iNo;
  
  for(iCnt = 2; iCnt <= iNo; iCnt++)
  {
   if(iCnt % 2 == 0)
    {
      
      printf("%d\n",iCnt);    
    }
    
  }
}
int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;
}

