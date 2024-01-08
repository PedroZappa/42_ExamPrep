#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

int		cmp(void *a, void *b);
t_list	*lst_new(void *data);
void	ft_printlist(t_list *lst);

int main(void) {
    // Create a list with some elements
    t_list *lst = lst_new((void*)1);
    lst->next = lst_new((void*)2);
    lst->next->next = lst_new((void*)3);
    lst->next->next->next = lst_new((void*)2);
    lst->next->next->next->next = lst_new((void*)4);

    // Print the original list
    printf("Original list:\n");
    ft_printlist(lst);

    // Remove elements with data equal to (void*)2
    ft_list_remove_if(&lst, (void*)2, cmp);

    // Print the modified list
    printf("Modified list after removing 2s:\n");
    ft_printlist(lst);

    // Free the remaining elements of the list
    while (lst) {
        t_list *temp = lst;
        lst = lst->next;
        free(temp);
    }

    return 0;
}

// Define the comparison function
int cmp(void *a, void *b)
{
    return ((a == b) ? 0 : 1);
}

// Function to create a new list node
t_list *lst_new(void *data)
{
    t_list *lst;

	lst = (t_list*)malloc(sizeof(t_list));
    lst->next = NULL;
    lst->data = data;
    return lst;
}

// Function to print the list
void ft_printlist(t_list *lst)
{
    while (lst) {
        printf("data: %p\n", lst->data);
        lst = lst->next;
    }
}

