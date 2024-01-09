#include "list.h"

/*	While the next node exists
 *		Compare lst->data with next->data
 *			If lst->data is larger than next do the swap
 *	*/
t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	t_list	*lst_start;
	int		to_swap;

	lst_start = lst;
	while (lst->next)
	{
		if (((*cmp)(lst->data, lst->next->data)) == 0)
		{
			to_swap = lst->data;
			lst->data = lst->next->data;
			lst->next->data = to_swap;
			lst = lst_start;
		}
		else
			lst = lst->next;
	}
	lst = lst_start;
	return (lst);
}

