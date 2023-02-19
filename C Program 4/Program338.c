//accept number from user and off 4th bit of number
#include<stdio.h>
#include<stdbool.h>
//4th
typedef unsigned int UINT;

// 
// 0000 0000 0000 0000 0000 0000 0000 0000
// 1111 1111 1111 1111 1111 1111 1111 0111 
//0XFFFFFFF7
UINT OffBit(UINT No)
{
   UINT iMask = 0XFFFFFFF7;

   UINT iAns = 0;

   iAns = No & iMask; 
   return iAns;
}

int main()
{
    UINT Value = 0;

    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&Value);

    iRet = OffBit(Value);

    printf("Updated number is : %d\n",iRet);
    
    return 0;
}