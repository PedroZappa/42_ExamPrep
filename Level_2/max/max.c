int		max(int* tab, unsigned int len)
{
	int	max;
	unsigned int	i;

	i = -1;
	max = 0;
	while (++i < len)
		if (tab[i] > max)
			max = tab[i];
	return (max);
}
