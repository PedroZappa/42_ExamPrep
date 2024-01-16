#include "ft_list.h"

/*	Applies `f` to each element of the list `begin_list` 
 *
 *	Loop while `begin_list` is not NULL
 *		Call `f` on `begin_list->data`
 *		Get next node in 'begin_list'
 *	*/
void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	while (begin_list)
	{
		(*f)(begin_list->data);
		begin_list = begin_list->next;
	}
}

