//write program which return largest element from singly linear linked list
#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0 

typedef int BOOL;

struct node
{
   int Data;
   struct node *Next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE Head, int no)
{
   PNODE newn = NULL;
   newn = (PNODE)malloc(sizeof(NODE));

   newn->Next = NULL;
   newn->Data = no;
   if(*Head == NULL)
   {
      *Head = newn;
   }
   else
   {
      newn->Next = *Head;
      *Head = newn;
   }
}

void Display(PNODE First)// (time complecity N)
{
   printf("Elements from the Linked List are : \n");
   while(First != NULL)
   {
      printf(" | %d |->",First->Data);
      First = First->Next;
   }
   printf("NULL\n");
}

int Addition(PNODE First)
{
   int iSum = 0;

   while(First != NULL)
   {
      iSum = iSum + (First->Data);
      First = First -> Next;
   }
   return iSum;
}

int Maximum(PNODE First)
{
   int iMax = 0;
   iMax = First->Data;

   while(First != NULL)
   {
      if(First ->Data > iMax)
      {
         iMax = First->Data;
      }
      First = First->Next;
   }
   return iMax;
}
int main()
{
   PNODE First = NULL;
   int iRet = 0;

   InsertFirst(&First, 110);
   InsertFirst(&First, 230);
   InsertFirst(&First, 320);
   InsertFirst(&First, 240);

   
   Display(First);

   iRet = Maximum(First);
   printf("Maximum is : %d\n",iRet);
   return 0;

   return 0;


}