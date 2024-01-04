#include "ft_list.h"

t_list	*ft_lstnew(void *data);
void	ft_lstadd_back(t_list **lst, t_list *new);
int		ft_atoi(char *str);
int		ft_isspace(int c);

int main(int argc, char **argv)
{
	t_list	*node;
	size_t	node_n;
	char	*data;
	size_t	lst_size;
	
	if (argc != 3)
	{
		printf("Usage: %s <data> <lst_size>\n", argv[0]);
		return (1);
	}
	data = argv[1];
	lst_size = ft_atoi(argv[2]);

	/* Create List */
	node = ft_lstnew(data);
	if (!node)
		return (1);
	node_n = 1;
	while (--lst_size)
		ft_lstadd_back(&node, ft_lstnew(data));

	/* Count number of nodes */
	node_n = ft_list_size(node);
	printf("List size: %zu\n", node_n);
	return 0;
}

t_list *ft_lstnew(void *data)
{
	t_list *node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->data = data;
	node->next = NULL;
	return (node);
}

void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *ptr;

	if (!*lst)
	{
		*lst = new;
		return ;
	}
	ptr = *lst;
	while (ptr->next)
		ptr = ptr->next;
	ptr->next = new;
}

int ft_atoi(char *str)
{
	int num;
	int neg;

	while (ft_isspace(*str))
		++str;
	neg = 1;
	if ((*str == '+') || (*str == '-'))
	{
		if (*str == '-')
			neg = -1;
		++str;
	}
	num = 0;
	while ((*str >= '0') && (*str <= '9'))
	{
		num = ((num * 10) + (*str - '0'));
		++str;
	}
	return (num * neg);

}

int ft_isspace(int c)
{
	return (c == ' ' || c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r');
}
