#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

void print_data(void *data);
t_list *create_elem(void *data);

int main() {
    // Create a list
    t_list *list = create_elem("Hello");
    list->next = create_elem("World");
    list->next->next = create_elem("!");

    // Apply `print_data` to each element of the list
    ft_list_foreach(list, print_data);

    // Free the list
    t_list *tmp;
    while (list) {
        tmp = list;
        list = list->next;
        free(tmp);
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
    t_list *new_elem = (t_list *)malloc(sizeof(t_list));
    if (!new_elem) 
		return NULL;
    new_elem->data = data;
    new_elem->next = NULL;
    return new_elem;
}

