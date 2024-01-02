
int ft_atoi2(const char *str)
{
	int result;
	int neg;

	result = 0;
	neg = 1;
	while (((*str >= 9) & (*str <= 13)) || (*str == ' '))
		++str;
	if ((*str == '+') || (*str == '-'))
	{
		if (*str == '-')
			neg = -1;
		++str;
	}
	while ((*str >= '0') && (*str <= '9'))
	{
		result = (result * 10) + (*str - '0');
		++str;
	}

	return (result * neg);
}
