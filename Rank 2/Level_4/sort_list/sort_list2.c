#include "list.h"

void ft_swap(int *a, int *b);

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	t_list	*lst_start;

	if (!lst)
		return (0);
	lst_start = lst;
	while (lst->next)
	{
		if (((*cmp)(lst->data, lst->next->data)) == 0)
		{
			ft_swap(&lst->data, &lst->next->data);
			lst = lst_start;
		}
		else
			lst = lst->next;
	}
	return (lst_start);
}

void ft_swap(int *a, int *b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}
