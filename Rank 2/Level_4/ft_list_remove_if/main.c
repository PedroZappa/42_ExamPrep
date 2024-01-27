#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ft_list.h"

int		cmp(void *a, void *b);
t_list	*create_list(void *data);
t_list	*add_node(t_list *list, void *data);
void	ft_printlist(t_list *lst);

int main(int argc, char *argv[])
{
	t_list *lst;
	char *to_del = "42";
	int n = 1;

	printf("Creating List!\n");
	lst = create_list("42");
	while (n < argc)
		 lst = add_node(lst, argv[n++]);
	printf("List Created!\n");
	ft_printlist(lst);

	printf("Removing all instances of '%s'\n", to_del);
	ft_list_remove_if(&lst, to_del, cmp);
	printf("Duplicated data removed\n");
	ft_printlist(lst);

	// Free List
	t_list *lst_start;
	while(lst)
	{
		lst_start = lst;
		lst = lst->next;
		free(lst_start);
	}
	return (0);
}

// Define the comparison function
int cmp(void *a, void *b) 
{
  return (strcmp((char*)a, (char*)b) == 0 ? 0 : 1);
}

// Function to create a new list node
t_list *create_list(void *data)
{
    t_list *new_elem = malloc(sizeof(t_list));
	if (!new_elem)
		return (NULL);
    new_elem->data = data;
    new_elem->next = NULL;
    return (new_elem);
}

t_list	*add_node(t_list *list, void *data)
{
	if (!list)
		return (create_list(data));
	t_list *curr = list;
	while (curr->next)
		curr = curr->next;	
	curr->next = create_list(data);
	return (list);
}

// Function to print the list
void ft_printlist(t_list *lst)
{
    while (lst) {
        printf("data: %s\n", (char *)lst->data);
        lst = lst->next;
    }
}
