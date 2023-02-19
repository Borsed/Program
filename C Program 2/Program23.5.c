//
#include<stdio.h>
void DisplaySchedule(char chDiv) 
{
  char A = '\0', B = '\0', C = '\0', D = '\0';
    
     if(chDiv == A)
      {
        printf("Your exam time at 7 AM");
      }
      
      else if(chDiv == B)
      {
         printf("Your exam time at 8.30 AM");
      }
      else if(chDiv == C)
      {
         printf("Your exam time at 9.20 AM");
      }
      else if(chDiv == D)
      {
         printf("Your exam time at 10.30 AM");
      }
      else
      {
        return;
      }
     
}
int main()
{
  char cValue = '\0';

  printf("Enter your Division\n");
  scanf("%c",&cValue);

  DisplaySchedule(cValue);

  return 0;
}