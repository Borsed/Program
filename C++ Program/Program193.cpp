//Problems on N numbers
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
      void Function()
     {
       //logic
     }
};
int main()
{
    int iLength = 0;

    cout<<"Enter the number of elements : "<<"\n";
    cin>>iLength;

    ArrayX obj(iLength);

    obj.Accept();

    obj.Function()

    return 0;
}