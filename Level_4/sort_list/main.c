#include <stdio.h>
#include <stdlib.h>
#include "list.h"
#include "sort_list.c"

int ascending(int a, int b);
int descending(int a, int b);
void ft_printlist(t_list *lst);
t_list	*create_list(int *data);
t_list	*add_node(t_list *list, int data);

// Main function to test sort_list
// int main()
// {
//    // Create a list
//    t_list *lst = malloc(sizeof(t_list));
//    lst->data = 5;
//    lst->next = malloc(sizeof(t_list));
//    lst->next->data = 1;
//    lst->next->next = malloc(sizeof(t_list));
//    lst->next->next->data = 3;
//    lst->next->next->next = malloc(sizeof(t_list));
//    lst->next->next->next->data = 2;
//    lst->next->next->next->next = NULL;
//
//    // Print original list
//    printf("Original List: ");
//    printList(lst);
//
//    // Sort list in ascending order
//    lst = sort_list(lst, ascending);
//
//    // Print sorted list
//    printf("Sorted List (asc): ");
//    printList(lst);
//
//    // Sort list in descending order
//    lst = sort_list(lst, descending);
//
//    // Print sorted list
//    printf("Sorted List (desc): ");
//    printList(lst);
//
//    // Free the list
//    free(lst->next->next->next);
//    free(lst->next->next);
//    free(lst->next);
//    free(lst);
//
//    return 0;
// }

int main(int argc, char *argv[])
{
	t_list *lst;
	int n;
	int data = 11;

	printf("Creating List!\n");
	lst = create_list(&data);
	n = 1;
	while (n < argc)
		lst = add_node(lst, atoi(argv[n++]));
	printf("List Created!\n");
	ft_printlist(lst);

	printf("Ordering List in ascending!\n");
	sort_list(lst, ascending);
	printf("List Sorted!\n");
	ft_printlist(lst);
	printf("Ordering List in descending!\n");
	sort_list(lst, descending);
	printf("List Sorted!\n");
	ft_printlist(lst);
	return (0);
}

/*	Add node to end of list
 *	*/
t_list	*create_list(int *data)
{
	t_list *new_node = malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->data = *data;
	new_node->next = NULL;
	return (new_node);
}

t_list	*add_node(t_list *list, int data)
{
	if (!list)
		return (create_list(&data));
	t_list *curr = list;
	while (curr->next)
		curr = curr->next;
	curr->next = create_list(&data);
	return (list);
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
void ft_printlist(t_list *lst)
{
   while (lst != NULL)
   {
       printf("%d ", (int)lst->data);
       lst = lst->next;
   }
   printf("\n");
}
