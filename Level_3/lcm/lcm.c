unsigned int    lcm(unsigned int a, unsigned int b)
{
	unsigned int max;

	if (a == 0 || b == 0)
		return 0;
	if (a > b)
		max = a;
	else
		max = b;
	while (1)
	{
		if ((max % a == 0) && (max % b == 0))
			return max;
		++max;
	}
}
