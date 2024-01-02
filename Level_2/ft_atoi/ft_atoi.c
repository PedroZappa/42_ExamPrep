int ft_atoi(const char *str)
{
	int		result;
	int		neg;
	int		num;

	result = 0;
	neg = 1;
	num = 0;
	while (((*str >= 9) && (*str <= 13)) || (*str == ' '))
		++str;
	if ((*str == '+') || (*str == '-'))
	{
		if (*str == '-')
			neg = -1;
		++str;
	}
	while ((*str >= '0') && (*str <= '9'))
	{
		num = *str - '0';
		result = (result * 10) + num;
		++str;
	}
	return (result * neg);
}
