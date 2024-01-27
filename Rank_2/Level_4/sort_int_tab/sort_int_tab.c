/* Loop through array of ints
 *		If current 'n' is  larger than the next
 *			Swap them
 *			Reset 'n' to 0
 *		Else
 *			Go to next 'n'
 * */
void sort_int_tab(int *tab, unsigned int size)
{
	unsigned int	n;
	int				to_swap;

	n = 0;
	while (n < (size - 1))
	{
		if (tab[n] > tab[n + 1])
		{
			to_swap = tab[n];
			tab[n] = tab[n + 1];
			tab[n + 1] = to_swap;
			n = 0;
		}
		else
			++n;
	}
}

