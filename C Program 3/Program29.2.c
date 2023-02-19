//write program which display all elements which are prime from singly linear linked list
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
bool CheckPrime(int iNo)
{
   int iSum = 0, iCnt = 0;

   for(iCnt = 2; iCnt <= (iNo/2); iCnt++)
   {
      if(iNo % iCnt == 0)
      {
          iCnt++;
          break;
      }
   }
}
void DisplayPrime(PNODE First)
{
   while(First != NULL)
   {
      if(CheckPrime(First->Data)==TRUE)
      {
         printf("%d is Prime number\n",First->Data);
      }
      First = First->Next;
   }
}

int main()
{
   PNODE First = NULL;

   InsertFirst(&First, 11);
   InsertFirst(&First, 20);
   InsertFirst(&First, 17);
   InsertFirst(&First, 41);
   InsertFirst(&First, 22);
   InsertFirst(&First, 89);


   
   DisplayPrime(First);

   return 0;


}