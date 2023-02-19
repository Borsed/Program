//Awrite peogram accept number from user and check whetherthat  number is greater than 100 or not
#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkGreater(int iNo)
{
    int iCnt = 0;
    for(iCnt = 100; iCnt <= iNo; iCnt++)
    {  
        if(iNo <= iCnt ==0)
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
    int iValue = 0;
    
    
    BOOL bRet = FALSE;

    printf("Please enter number\n");
    scanf("%d",&iValue);

    bRet = ChkGreater(iValue);

    if(bRet == TRUE)
    {
        printf("Greater\n");
    }
    else
    {
        printf("Smaller\n");
    }
    return 0;
}
