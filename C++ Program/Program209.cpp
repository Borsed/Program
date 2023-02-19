//accept number from user and frequency of largest number
#include<iostream>
using namespace std;

//Input: 7985677
//output: Maximum times occured times digit is 7 and its frequency is 3

class DigitX
{
    public:
        int iNo;
        DigitX()
        {
            iNo = 0;
        }
        DigitX(int i)
        {
            iNo = i;
        }
        void MaxFrequency()
        {
            int iTemp = iNo;
            int iDigit = 0;
            int Frequency[10] = {0};

            while(iTemp != 0)
            {
                iDigit = iTemp % 10;
                Frequency[iDigit]++;
                iTemp = iTemp / 10;
            }
            int iMaxFrequency = 0;
            int iMaxDigit = 0;
            for(int iCnt = 0; iCnt < 10; iCnt++)
            {
                if(Frequency[iCnt] > iMaxFrequency)
                {
                    iMaxFrequency = Frequency[iCnt];
                    iMaxDigit = iCnt;
                }
            }
            cout<<"Maximum times occured times digit is "<<iMaxDigit<<" and its frequency is "<<iMaxFrequency<<"\n";
        }
        
};
int main()
{
    int iValue = 0;
    int iRet = 0;
    

    cout<<"Please enter number : "<<"\n";
    cin>>iValue;

    DigitX obj(iValue);

    obj.MaxFrequency();

    return 0;
}