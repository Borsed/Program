//Doubly linear linked list in c++
#include<iostream>
using namespace std;
#pragma pack(1)
struct node
{
   int data;
   struct node *next;
   struct node *prev;     //x
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

class DoublyLL
{
    public:
      PNODE First;

      DoublyLL();

      void InsertFirst(int no);
      void InsertLast(int no);
      void InsertAtPos(int no, int ipos);

      void DeleteFirst();
      void DeleteLast();
      void DeleteAtPos(int ipos);
      void Display();
      int Count();
        
};

DoublyLL :: DoublyLL()  // Default constructor
{
    First = NULL;
}
void DoublyLL :: InsertFirst(int no)
{
   PNODE newn = new NODE;

   newn->data = no;
   newn->next = NULL;
   newn->prev = NULL; ///X

   if(First == NULL)
   {
      First = newn;
   }
   else
   {
      newn->next = First;
      First->prev = newn; // X
      First = newn;
   }
}

void DoublyLL :: InsertLast(int no)
{
   PNODE newn = new NODE;
   PNODE temp = First;


   newn->data = no;
   newn->next = NULL;
   newn->prev = NULL; ///X

   if(First == NULL)
   {
       First = newn;
   }
   else
   {
      while(temp->next != NULL)
      {
         temp = temp->next;
      }
      temp->next = newn;
      newn->prev = temp; // X
   }
}

void DoublyLL :: InsertAtPos(int no, int ipos)
{
   int NodeCnt = 0;
   NodeCnt = Count();
   if((ipos < 1)||(ipos > NodeCnt+1))
   {
      cout<<"Invalid position"<<"\n";
      return;
   }

   if(ipos == 1)
   {
      InsertFirst(no);
   }

   else if(ipos == NodeCnt+1)
   {
      InsertLast(no);
   }

   else
   {
      PNODE newn = new NODE;
      newn->data = no;
      newn->next = NULL;
      newn->prev = NULL;  //X

      PNODE temp = First;
      for(int iCnt = 1; iCnt < ipos-1; iCnt++)
      {
         temp = temp->next;
      }
      newn->next = temp->next;
      temp->next = newn; //X
   }
}

void DoublyLL :: DeleteFirst()
{
   if(First == NULL)
   {
      return;
   }
   else if((First)->next == NULL)
   {
      delete(First);
      First = NULL;
   }
   else
   {
      First = (First)->next;
      delete((First)->prev);  //X
      (First)->prev = NULL; //X
   }
}
void DoublyLL ::  DeleteLast()
{
   PNODE temp = First;
   if(First == NULL)
   {
      return;
   }
   else if((First)->next == NULL)
   {
      delete(First);
      First = NULL;
   }
   else
   {
      while(temp->next->next != NULL)
      {
         temp = temp->next;
      }
      delete(temp->next);
      temp->next = NULL;
   }
}


void DoublyLL :: DeleteAtPos(int ipos)
{
    int NodeCnt = 0;
    NodeCnt = Count();
   if((ipos < 1) || (ipos > NodeCnt))
   {
      cout<<"Invalid position"<<"\n";
      return;
   }

   if(ipos == 1)
   {
      DeleteFirst();
   }
   else if(ipos == NodeCnt)
   {
      DeleteLast();
   }
   else
   {
      PNODE temp1 = First;
      for(int iCnt = 1; iCnt < ipos-1; iCnt++)
      {
        temp1 = temp1->next; 
      }
      PNODE temp2 = temp1->next;

      temp1->next = temp2->next;
      //temp2->next->prev = temp1;
      delete temp2;
   }
}

void DoublyLL :: Display()
{
   cout<<"Elements of Linked List are"<<"\n";
   
   PNODE temp = First;
   while(temp != NULL)
   {
      cout<<temp->data<<" ";
   
      temp = temp->next;
   }
    cout<<"\n";
}
int DoublyLL :: Count()
{
    PNODE temp = First;
    int iCnt = 0;

    while(temp != NULL)
    {
        iCnt++;
        temp = temp -> next;
    }
    return iCnt;
}
int main()
{
   DoublyLL obj;
   int iRet = 0;

   obj.InsertFirst(51);
   obj.InsertFirst(21);
   obj.InsertFirst(11);

   obj.Display();
   iRet = obj.Count();
   cout<<"Number of elements are : "<<iRet<<"\n";

   obj.InsertLast(101);
   obj.InsertLast(111);
   obj.InsertLast(121);

   obj.Display();
   iRet = obj.Count();
   cout<<"Number of elements are : "<<iRet<<"\n";

   obj.InsertAtPos(105,5);

   obj.Display();
   iRet = obj.Count();
   cout<<"Number of elements are : "<<iRet<<"\n";

   obj.DeleteAtPos(5);
   obj.DeleteFirst();
   obj.DeleteLast();

   obj.Display();
   iRet = obj.Count();
   cout<<"Number of elements are : "<<iRet<<"\n";
   
   return 0;
}