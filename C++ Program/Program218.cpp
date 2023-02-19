//Linked List
#include<iostream>
using namespace std;

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

class SinglyLL
{
    public:
        PNODE First;
        int iCount;

        SinglyLL();
        void InsertFirst(int no);
        void InsertLast(int no);
        void InsertAtPosition(int no, int ipos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPosition(int ipos);

        void Display();

};
/*
Return_Value class-Name(Parameters)
{

}
*/
SinglyLL :: SinglyLL()
{
    First = NULL;
    iCount = 0;
}

void SinglyLL :: InsertFirst(int no)
{
    PNODE newn = new NODE;
    newn->data = no;
    newn->next = NULL;

    if(First == NULL)
    {
        First = newn;
        iCount++;
    }
    else
    {
        newn->next = First;
        First = newn;
        iCount++;
    }
}
void SinglyLL :: InsertLast(int no)
{
    PNODE newn = new NODE;
    newn->data = no;
    newn->next = NULL;

    if(First == NULL)
    {
        First = newn;
        iCount++;
    }
    else
    {
        PNODE temp = First;

        while(temp->next != NULL)
        {
            temp = temp ->next;
        }
        temp->next = newn;
        iCount++;
    }
}
void SinglyLL :: InsertAtPosition(int no, int ipos)
{}
void SinglyLL :: DeleteFirst()
{
  
}
void SinglyLL :: DeleteLast()
{
   
}
void SinglyLL :: DeleteAtPosition(int ipos)
{}
void SinglyLL :: Display()
{
    cout<<"Elements of Linked List are : "<<"\n";
    PNODE temp = First;

    while(temp != NULL)
    {
        cout<<"| "<<temp->data<<" |->";
        temp = temp->next;
    }
    cout<<"| NULL |"<<"\n";
}

int main()
{
    SinglyLL obj1;

    obj1.InsertFirst(51);
    obj1.InsertFirst(21);
    obj1.InsertFirst(11);
     
    obj1.Display();

    cout<<"Number of nodes in First linkedlist are : "<<obj1.iCount<<"\n";
  
    obj1.InsertLast(101);
    obj1.InsertLast(111);
    obj1.InsertLast(121);

    obj1.Display();

    cout<<"Number of nodes are : "<<obj1.iCount<<"\n";

    return 0;
}