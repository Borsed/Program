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

void InsertFirst(PPNODE First, int no)
{
   PNODE newn = (PNODE)malloc(sizeof(NODE));

   newn->data = no;
   newn->next = NULL;

   if(*First == NULL) // if linkedlist is empty
   {
      *First = newn;
   }
   else //if linkedlist at list one node
   {
      newn->next = *First;
      *First = newn;
   }
}

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

int Count(PNODE First)//(time complecity N)
{
  int iCnt = 0;
   while(First != NULL)
   {
      iCnt++;
      First = First->next;
   }
   return iCnt;
}

void DeleteFirst(PPNODE First)
{
   PNODE temp = *First;
   if(*First == NULL)
   {
      return;
   }
   else if((*First) -> next == NULL)
   {
      free(*First);
      *First = NULL;
   }
   else
   {
      (*First) = (*First) -> next;
      free(temp);
   }
}

void DeleteLast(PPNODE First)
{
   PNODE temp = *First;
   if(*First == NULL)
   {
      return;
   }
   else if((*First) -> next == NULL)
   {
      free(*First);
      *First = NULL;
   }
   else
   {
      while(temp->next->next != NULL)
      {
         temp = temp->next;
      }
      free(temp->next);
      temp->next = NULL;
   }
}

int main()
{
   PNODE Head = NULL;
   int iRet = 0;

   InsertFirst(&Head, 51);
   InsertFirst(&Head, 21);
   InsertFirst(&Head, 11);

   Display(Head);

   iRet = Count(Head);
   printf("Number of node are : %d\n",iRet);

   InsertLast(&Head, 101);
   InsertLast(&Head, 111);

   Display(Head);

   iRet = Count(Head);
   printf("Number of node are : %d\n",iRet);

   DeleteFirst(&Head);
   
   Display(Head);

   iRet = Count(Head);
   printf("Number of node are : %d\n",iRet);

   DeleteLast(&Head);

   Display(Head);

   iRet = Count(Head);
   printf("Number of node are : %d\n",iRet);


   return 0;
}