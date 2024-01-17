int		get_digit(char c, int base_len);
char	to_lower(char c);
int		is_digit(char c);
int		is_alpha(char c);

/*	ASCII to integer conversion
 *
 *	Handle sign
 *	While get_digit() returns 0 or positive integer
 *		Convert to integer:
 *			Multiply 'num' by base and add 'digit' multiplied by the sign
 *	return 'num'
 *	*/
int	ft_atoi_base(const char *str, int str_base)
{
	int digit;
	int num;
	int neg;

	neg = 1;
	num = 0;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
		{
			neg = -1;
			++str;
		}
		else
			++str;
	}
	while ((digit = get_digit(to_lower(*str++), str_base)) >= 0)
		num = ((num * str_base) + (digit * neg));
	return (num);
}

/*	Gets digit from character
 *
 *	if 'base_len' smaller or equal to 10:
 *		set 'n_digit' to (base_len + '0')
 *	else
 *		set 'n_digit' to ((base_len - 10) + 'a')
 *
 *	if 'c' is a digit AND smaller than 'n_digit':
 *		return (c - '0')
 *	else if 'c' is a letter AND smaller than 'n_digit':
 *		return ((c + 10) - 'a')
 *	else
 *		return (-1)
 *	*/
int get_digit(char c, int base_len)
{
	int n_digit;

	if (base_len <= 10)
		n_digit = base_len + '0';
	else
		n_digit = (base_len - 10) + 'a';

	if (is_digit(c) && (c <= n_digit))
		return (c - '0');
	else if (is_alpha(c) && (c <= n_digit))
		return ((c + 10) - 'a');
	else
		return (-1);
}

char	to_lower(char c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (c + ('a' - 'A'));
	return (c);
}

int		is_digit(char c)
{
	return ((c >= '0') && (c <= '9'));
}

int		is_alpha(char c)
{
	return (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')));
}
