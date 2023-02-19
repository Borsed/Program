//stack
#include<iosream>
using namespace std;

struct node
{
    int data;
    struct node *next;
}
class stack
{
    public:
        struct node *First;
        int iCount;

        Stack();

        bool IsStackEmpty();
        void Push(int no);  // insert last
        int Pop();          // delete last
        void Display();
}
Stack :: Stack()
{

}
bool Stack :: IsStackEmpty()
{

}
void Stack :: Push(int no)
{

}
int Stack :: Pop()
{

}
void Stack :: Display()
{

}
int main()
{

    return 0;
}