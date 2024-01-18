#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

void	print_data(void *data);
t_list	*create_elem(void *data);
t_list	*add_node(t_list *list, void *data);

int main(int argc, char **argv) 
{
	int n;
    t_list *list = create_elem("y0!");

	n = 1;
	while (n < argc)
		list = add_node(list, argv[n++]);

    // Apply `print_data` to each element of the list
    ft_list_foreach(list, print_data);

    // Free the list
    t_list *lst_start;
    while (list)
	{
        lst_start = list;
        list = list->next;
        free(lst_start);
    }
    return 0;
}

/* Function to be applied to each element of the list
 * */
void print_data(void *data) 
{
    printf("%s\n", (char *)data); // Assumes that data points to a string
}

/* Helper function to create a new list element
 * */
t_list *create_elem(void *data) 
{
    t_list *new_elem = malloc(sizeof(t_list));
    if (!new_elem) 
		return NULL;
    new_elem->data = data;
    new_elem->next = NULL;
    return new_elem;
}

/*	Add new node to the end of the list 
 *	*/
t_list *add_node(t_list *list, void *data) 
{
	if (!list) 
		return create_elem(data);
	t_list *tmp = list;
	while (tmp->next) 
		tmp = tmp->next;
	tmp->next = create_elem(data);
	return list;
}
