//write program which return addition of all even element from singly linear linked list
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

void InsertFirst(PPNODE Head, int iNo)
{
   PNODE newn = NULL;
   newn = (PNODE)malloc(sizeof(NODE));

   newn->Next = NULL;
   newn->Data = iNo;
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
   int iNo = 0;
   int iCnt = 0, iSum = 0;
  
    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
   {
      if((iNo % iCnt) == 0)
      {
         iSum = iSum + (First->Data);
         First = First -> Next;
      }
   }
   return iSum;
}

int main()
{
   PNODE First = NULL;
   int iRet = 0;

   InsertFirst(&First, 11);
   InsertFirst(&First, 20);
   InsertFirst(&First, 32);
   InsertFirst(&First, 41);
   
   
   Display(First);

   iRet = Addition(First);
   printf("Addition is : %d\n",iRet);
   return 0;
   
   return 0;

}