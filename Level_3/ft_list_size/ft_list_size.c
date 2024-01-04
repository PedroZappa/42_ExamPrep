#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int n_nodes;

	if (!begin_list)
		return (0);
	n_nodes = 0;
	while (begin_list)
	{
		begin_list = begin_list->next;
		++n_nodes;
	}
	return (n_nodes);
}
