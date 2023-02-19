//Problems on Numbers
#include<iostream>
using namespace std;

class Numbers
{
    public:
     int iNo;
     Numbers(int i)
     {
        iNo = i;
     }
     void Fuction()
     {

     }
};
int main()
{
    int iValue = 0;

    cout<<"Enter number : \n";
    cin>>iValue;

    Numbers obj(iValue);

    obj.Fuction();

    return 0;
}