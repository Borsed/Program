//Problems of addition of even and odd numbers
#include<iostream>
using namespace std;
class ArrayX
{
    public:
     int * Arr;
     int iSize;
     ArrayX(int i)
     {
        iSize = i;
        Arr = new int [iSize];
     }
     void Accept()
     {
        cout<<"Please enter the number : "<<"\n";
        int iCnt = 0;

        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            cin>>Arr[iCnt];
        }
     }
    int SumEven()
    {
        int iSum = 0;
        int iCnt = 0;

        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            if((Arr[iCnt]%2)== 0)
            {
                iSum = iSum + Arr[iCnt];
            }

        }
        return iSum;
    }
};
int main()
{
    int iLength = 0;
    int iRet = 0;

    cout<<"Enter the number of elements : "<<"\n";
    cin>>iLength;

    ArrayX obj(iLength);

    obj.Accept();


    iRet = obj.SumEven();
    cout<<"Addition of even elements : "<<iRet<<"\n";

    return 0;
}