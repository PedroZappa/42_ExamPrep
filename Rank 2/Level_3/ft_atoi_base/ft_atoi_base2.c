int ft_isdigit(int c);
int ft_isupper(int c);
int ft_islower(int c);

int	ft_atoi_base(const char *str, int str_base)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		++i;
	}
	while (str[i])
	{
		result *= str_base;
		if (ft_isdigit(str[i]))
			result += (str[i] - '0');
		else if (ft_isupper(str[i]))
			result += (str[i] - '7');
		else if (ft_islower(str[i]))
			result += (str[i] - 'W');
		++i;
	}
	return (result * sign);
}

int ft_isdigit(int c)
{
	return ((c >= '0') && (c <= '9'));
}

int ft_islower(int c)
{
	return ((c >= 'a') && (c <= 'z'));
}

int ft_isupper(int c)
{
	return ((c >= 'A') && (c <= 'Z'));
}
