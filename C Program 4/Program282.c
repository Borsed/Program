//Singly Linear Linked list in c(Smallest element return)
#include<stdio.h>
#include<stdlib.h>
#pragma pack(1)
struct node
{
   int data;
   struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertLast(PPNODE First, int no)// (time complecity N)
{
   PNODE newn = (PNODE)malloc(sizeof(NODE));
   PNODE temp = *First;

   newn->data = no;
   newn->next = NULL;

   
   if(*First == NULL) // if linkedlist is empty
   {
      *First = newn;
   }
   else //if linkedlist at list one node
   {
      while(temp->next != NULL)
      {
         temp = temp->next;
      }
      temp->next = newn;
   }
}

void Display(PNODE First)// (time complecity N)
{
   printf("Elements from the Linked List are : \n");
   while(First != NULL)
   {
      printf(" | %d |->",First->data);
      First = First->next;
   }
   printf("NULL\n");
}
int Minimum(PNODE First)
{
   int iMin = 0;
   if(First == NULL)
   {
      printf("Linked list is empty\n");
      return 0;
   }
   
   iMin = First->data;

   while(First != NULL)
   {
      if(First ->data < iMin)
      {
         iMin = First->data;
      }
      First = First->next;
   }
   return iMin;
}
int main()
{
   PNODE Head = NULL;
   int iRet = 0;

   
   iRet = Minimum(Head);
   printf("Minimum is : %d\n",iRet);

   InsertLast(&Head, 11);
   InsertLast(&Head, 21);
   InsertLast(&Head, 51);
   InsertLast(&Head, 101);
   InsertLast(&Head, 111);
   InsertLast(&Head, 121);


   Display(Head);

   iRet = Minimum(Head);
   printf("Minimum is : %d\n",iRet);
   return 0;
}
