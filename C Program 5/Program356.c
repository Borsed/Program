//Recursion
//accept number from user and display factor
//10
//1 2 5
#include<stdio.h>

int FactorsR(int No)
{
    static int iCnt = 1;

    if(iCnt <= (No/2))
    {
        if((No % iCnt) == 0)
        {
            printf("%d\n",iCnt);
        }
        iCnt++;
        FactorsR(No);
    }

}
int main()
{
    int Value = 0;

    printf("Enter the Number\n");
    scanf("%d",&Value);

    FactorsR(Value);

    return 0;
}