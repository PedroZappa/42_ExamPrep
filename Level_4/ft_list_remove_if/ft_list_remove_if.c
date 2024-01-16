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
void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*to_del;	// To hold the element to be deleted
	t_list	*curr;		// To traverse through the list

	curr = *begin_list;
	while (curr->next)
	{
		if ((*cmp)(curr->next->data, data_ref) == 0)
		{
			to_del = curr->next;
			curr->next = curr->next->next;
			free(to_del);
		}
		curr = curr->next;
	}
	curr = *begin_list;
	if (curr && ((*cmp)(curr->data, data_ref) == 0))
	{
		*begin_list = curr->next;
		free(curr);
	}
}
