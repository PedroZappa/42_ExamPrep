#include "ft_list.h"

/*	Returns the number of nodes in a list.
 *
 *	If the list is empty, returns 0.
 *	Loop through the list 
 *		Count the number of nodes.
 *		Set the current node to the next node
 *	Return the number of nodes
 *	*/
int	ft_list_size(t_list *begin_list)
{
	int n_nodes;

	if (!begin_list)
		return (0);
	n_nodes = 0;
	while (begin_list)
	{
		++n_nodes;
		begin_list = begin_list->next;
	}
	return (n_nodes);
}
