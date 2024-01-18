#include <stdlib.h>
#include "ft_list.h"

/* Store begin_list in curr;
 * While the current element is not NULL
 *		Compare next->data with data_ref
 *			Save the address of next node in 'to_del'
 *			Get address of curr->next->next node and override curr->next
 *			free 'to_del'
 * // Handle the case where begin_list is equal to data_ref
 * Reset curr to begin_list
 * If the current element exists and it's value equals data_ref
 * 		Make the current element point to the next
 * 		Free the current element
 * */
void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*to_free;
	t_list	*current;

	current = *begin_list;
	while (current->next)
	{
		if ((*cmp)(current->next->data, data_ref) == 0)
		{
			to_free = current->next;
			current->next = current->next->next;
			free(to_free);
		}
		current = current->next;
	}
	current = *begin_list;
	if (current && (*cmp)(current->data, data_ref) == 0)
	{
		*begin_list = current->next;
		free(current);
	}
}
