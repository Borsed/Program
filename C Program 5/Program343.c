//accept number and alternate nibble toggle
#include<stdio.h>

// 0000 1111 0000 1111 0000 1111 0000 1111
//  0     F   0     F   0    F    0    F
// 0X0F0F0F0F
typedef unsigned int UINT;
UINT ToggleBit(UINT No)
{
   UINT iMask = 0X0F0F0F0F;

   UINT iAns = 0;

   iAns = No ^ iMask; 
   return iAns;
}

int main()
{
    UINT Value = 0;

    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&Value);

    iRet = ToggleBit(Value);

    printf("Updated number is : %d\n",iRet);
    
    return 0;
}