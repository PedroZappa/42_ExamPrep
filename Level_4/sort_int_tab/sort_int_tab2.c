void ft_swap(int *a, int *b);

void sort_int_tab(int *tab, unsigned int size)
{
	unsigned int	n;
	
	n = 0;
	while (n < (size - 1))
	{
		if (tab[n] > tab[n + 1])
		{
			ft_swap(&tab[n], &tab[n + 1]);
			n = 0;
		}
		else
			++n;
	}

}

void ft_swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
