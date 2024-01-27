int	    is_power_of_2(unsigned int n)
{
	unsigned int i;

	i = 2;
	while (i <= n)
	{
		if (i == n)
			return (1);
		i *= 2;
	}
	return (0);
}
