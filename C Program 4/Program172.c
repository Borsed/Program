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

void InsertLast(PPNODE First, int no)
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

   }
}

void Display(PNODE First)
{
   printf("Elements from the Linked List are : \n");
   while(First != NULL)
   {
      printf(" | %d |->",First->data);
      First = First->next;
   }
   printf("NULL\n");
}

int Count(PNODE First)
{
  int iCnt = 0;
   while(First != NULL)
   {
      iCnt++;
      First = First->next;
   }
   return iCnt;
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

   return 0;
}