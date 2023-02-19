//write program which return Smallest element from singly linear linked list
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

void Display(PNODE First)
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

int Minimum(PNODE First)
{
   int iMin = 0;
   iMin = First->Data;

   while(First != NULL)
   {
      if(First ->Data < iMin)
      {
         iMin = First->Data;
      }
      First = First->Next;
   }
   return iMin;
}
int main()
{
   PNODE First = NULL;
   int iRet = 0;

   InsertFirst(&First, 110);
   InsertFirst(&First, 230);
   InsertFirst(&First, 20);
   InsertFirst(&First, 240);
   InsertFirst(&First, 640);

   
   Display(First);

   iRet = Minimum(First);
   printf("Minimum is : %d\n",iRet);
   return 0;

   return 0;


}