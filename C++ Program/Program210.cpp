//accept two number from user and check whether that number is anagram 

//Input: 789567  597768
//output: Number are anagram
#include<iostream>
using namespace std;
bool CheckAnagram(int iNo1, int iNo2)
{
    int Frequency1[10] = {0};
    int Frequency2[10] = {0};
    bool Flag = true;

    while(iNo1 != 0)
    {
        Frequency1[(iNo1 % 10)]++;
        iNo1 = iNo1 /10;
    }

     while(iNo2 != 0)
    {
        Frequency2[(iNo2 % 10)]++;
        iNo2 = iNo2 /10;
    }
    
    for(int iCnt = 0; iCnt < 10; iCnt++)
    {
        if(Frequency1[iCnt] != Frequency2[iCnt])
        {
            Flag = false;
            break;
        }
    }
    return Flag;
}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    bool bRet = false;

    cout<<"Please First number : "<<"\n";
    cin>>iValue1;

    cout<<"Please Second number : "<<"\n";
    cin>>iValue2;

    bRet = CheckAnagram(iValue1, iValue2);
    if(bRet == true)
    {
      cout<<"Number are anagram"<<"\n";
    }
    else
    {
      cout<<"Number are not anagram"<<"\n";

    }
    return 0;
}