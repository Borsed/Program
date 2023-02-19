
#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0 

typedef int BOOL;

struct node
{
   int Data;
   node *Next;
};
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
int SearchFirstOcc(PNODE Head, int no)
{
   
}
int main()
{
   PNODE First = NULL;

   InsertFirst(&First, 101);
   InsertFirst(&First, 51);
   InsertFirst(&First, 21);
   InsertFirst(&First, 11);

   return 0;


}