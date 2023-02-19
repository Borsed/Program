//Write a program which accept total marks & obtained marks from user and calculate percentage
#include<stdio.h>
float Percentage(float fTotal, float fObtained)
{
    int iAve = 0;
    float iCnt = 0;
   
     for(iCnt = 0; iCnt < fObtained; iCnt++)
    {  
        iAve = fObtained * 100;
    }
    
    
    return (iAve/fTotal);
}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    
    float fRet = 0;

    printf("Please enter total marks\n");
    scanf("%d",&iValue1);
    printf("Please enter obtained marks\n");
    scanf("%d",&iValue2);

    fRet = Percentage(iValue1, iValue2);

    printf("Percentage is : %f\n",fRet);

    return 0;
}

