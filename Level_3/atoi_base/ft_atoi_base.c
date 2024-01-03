char	to_lower(char c);
int		ft_isspace(char c);
int		get_digit(char c, int base_len);

int	ft_atoi_base(const char *str, int str_base)
{
	int digit;
	int num;
	int neg;
	int i;

	i = 0;
	neg = 1;
	digit = 0;
	while (ft_isspace(str[i]))
		++str;
	if (*str == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg = -1;
		++str;
	}
	while ((digit = get_digit(to_lower(*str), str_base)) >= 0)
	{
		num = (num * str_base) + (digit * neg);
		++str;
	}
	return (num);
}

int get_digit(char c, int base_len)
{
	int n_digit;
	if (base_len <= 10)
		n_digit = base_len + '0';
	else
		n_digit = base_len - 10 + 'a';

	if ((c >= '0') && (c <= '9') && (c <= n_digit))
		return (c - '0');
	else if ((c >= 'a') && (c <= 'f') && (c <= n_digit))
		return (10 + c - 'a');
	else
		return (-1);
}


int ft_isspace(char c)
{
	return (c == ' ' || (c >= 9 && c <= 13));
}

char	to_upper(char c)
{
	if (c >= 'a' && c <= 'z')
		return (c + ('A' - 'a'));
	return (c);
}
char	to_lower(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + ('a' - 'A'));
	return (c);
}
