//Awrite peogram accept two number check whetherthat  number are equal or not
#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkEqual(int iNo1, int iNo2)
{
    int iCnt = 0;
    for(iCnt = iNo2; iCnt <= iNo1; iCnt++)
    {  
        if(iNo1 <= iNo2 != 0)
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
    int iValue1 = 0;
    int iValue2 = 0;
    
    BOOL bRet = FALSE;

    printf("Please enter number\n");
    scanf("%d%d",&iValue1, &iValue2);

    bRet = ChkEqual(iValue1, iValue2);

    if(bRet == TRUE)
    {
        printf("Equal\n");
    }
    else
    {
        printf("Not Equal\n");
    }
    return 0;
}
