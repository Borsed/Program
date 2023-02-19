//Recursion
//accept number from user and display factor
//10
//1 2 5
#include<stdio.h>

int FactorsI(int No)
{
    int iCnt = 1;

    for(iCnt = 1; iCnt <= (No/2); iCnt++)
    {
        if((No % iCnt) == 0)
        {
            printf("%d\n",iCnt);
        }
    }

}
int main()
{
    int Value = 0;

    printf("Enter the Number\n");
    scanf("%d",&Value);

    FactorsI(Value);

    return 0;
}