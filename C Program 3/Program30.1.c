//write program which reverse each element of singly linked list
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
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

void InsertFirst(PPNODE First, int iNo)
{
   PNODE newn = NULL;
   newn = (PNODE)malloc(sizeof(NODE));

   newn->Next = NULL;
   newn->Data = iNo;
   if(*First == NULL)
   {
      *First = newn;
   }
   else
   {
      newn->Next = *First;
      *First = newn;
   }
}

void Display(PNODE First)
{
   printf("Elements from the Linked List are : \n");
   while(First != 0)
   {
      printf(" | %d |->",First->Data);
      First = First->Next;
   }
   printf("NULL\n");
}
int Reverse(int iNo)
{
   int Number = 0; int iDigit = 0;
   while(Number!= 0)
   {
      iDigit = Number % 10;
      Number = Number * 10 + iDigit;
      Number= Number /10;
   }
   return iNo;
}

void ReverseX(PNODE First)
{
  
   if(First == NULL)
   {
      return;
   }
   while(First != NULL)
   {
      First ->Data = Reverse (First->Data);
      First = First->Next;
   }
}

int main()
{
   PNODE First = NULL;
   

   InsertFirst(&First, 11);
   InsertFirst(&First, 28);
   InsertFirst(&First, 17);
   InsertFirst(&First, 41);
   InsertFirst(&First, 6);
   InsertFirst(&First, 89);

   
   ReverseX(First);   
   return 0;

}