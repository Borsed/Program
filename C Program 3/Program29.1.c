//write program which display all elements which are perfect from singly linear linked list
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
bool CheckPerfect(int iNo)
{
   int iSum = 0, iCnt = 0, iTemp = iNo;

   for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
   {
      if(iNo % iCnt == 0)
      {
         iSum = iSum + iCnt;
      }
   }
   return(iSum == iTemp);
}
void DisplayPerfect(PNODE First)
{
   while(First != NULL)
   {
      if(CheckPerfect(First->Data)==TRUE)
      {
         printf("%d is perfect number\n",First->Data);
      }
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


   
   DisplayPerfect(First);

   return 0;


}