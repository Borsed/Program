//Write a program which accept three numbers and print in multiplication// handle the condition if number is 0
#include<stdio.h>
int Multiply(int iNo1, int iNo2, int iNo3)
{
    int iMult = 1;
    int iCnt = 0;
      for(iCnt = 1; iCnt <= iMult; iCnt++)
    {
       
      iMult = iMult * iCnt;
         
    }
    
    
    return iMult;
}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iValue3 = 0;
    
    int iRet = 0;

    printf("Please enter three number\n");
    scanf("%d %d %d",&iValue1, &iValue2, iValue3);

    iRet = Multiply(iValue1, iValue2, iValue3);

    printf("Multiplication is : %d\n",iRet);

    return 0;
}

