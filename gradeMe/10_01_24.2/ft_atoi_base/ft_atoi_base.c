int		get_digit(char c, int base_len);
char	ft_tolower(char c);
int		ft_isdigit(int c);
int  	ft_isalpha(int c);

int	ft_atoi_base(const char *str, int str_base)
{
	int digit;
	int integer;
	int sign;

	sign = 1;
	integer = 0;
	if ((*str == '-') || (*str == '+'))
	{
		if (*str == '-')
			sign = -1;
		++str;
	}
	while ((digit = get_digit(ft_tolower(*str++), str_base)) >= 0)
		integer = ((integer * str_base) + (digit * sign));
	return (integer);
}

char ft_tolower(char c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (c + 32);
	return (c);
}

int	get_digit(char c, int base_len)
{
	int digit_len;
	
	if (base_len <= 10)
		digit_len = base_len + '0';
	else
		digit_len = (base_len - 10) + 'a';

	if (ft_isdigit(c) && (c <= digit_len))
		return (c - '0');
	else if (ft_isalpha(c) && (c <= digit_len))
		return ((c + 10) - 'a');
	else
		return (-1);
}

int ft_isdigit(int c)
{
	return ((c >= '0') && (c <= '9'));
}

int ft_isalpha(int c)
{
	return ((c >= 'a') && (c <= 'f')) || ((c >= 'A') && (c <= 'F'));
}
