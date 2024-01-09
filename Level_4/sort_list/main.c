#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int ascending(int a, int b);
int descending(int a, int b);
void printList(t_list *lst);

// Main function to test sort_list
int main()
{
   // Create a list
   t_list *lst = malloc(sizeof(t_list));
   lst->data = 5;
   lst->next = malloc(sizeof(t_list));
   lst->next->data = 1;
   lst->next->next = malloc(sizeof(t_list));
   lst->next->next->data = 3;
   lst->next->next->next = malloc(sizeof(t_list));
   lst->next->next->next->data = 2;
   lst->next->next->next->next = NULL;

   // Print original list
   printf("Original List: ");
   printList(lst);

   // Sort list in ascending order
   lst = sort_list(lst, ascending);

   // Print sorted list
   printf("Sorted List (asc): ");
   printList(lst);

   // Sort list in descending order
   lst = sort_list(lst, descending);

   // Print sorted list
   printf("Sorted List (desc): ");
   printList(lst);

   // Free the list
   free(lst->next->next->next);
   free(lst->next->next);
   free(lst->next);
   free(lst);

   return 0;
}

// Comparison function for sorting in ascending order
int ascending(int a, int b)
{
   return (a <= b);
}

// Comparison function for sorting in descending order
int descending(int a, int b)
{
   return (a >= b);
}

// Utility function to print the list
void printList(t_list *lst)
{
   while (lst != NULL)
   {
       printf("%d ", lst->data);
       lst = lst->next;
   }
   printf("\n");
}
