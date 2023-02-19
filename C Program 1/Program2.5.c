//Accept number from user and check whether number is even or odd
#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkEven(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {  
        if(iNo % 2 ==0)
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

    printf("Enter number\n");
    scanf("%d",&iValue);

    bRet = ChkEven(iValue);

    if(bRet == 1)
    {
        printf("Number is Even\n");
    }
    else
    {
        printf("Number is Odd\n");
    }
    return 0;
}
