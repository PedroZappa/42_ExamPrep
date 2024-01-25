int		get_digit(char c, int base_len);
char	to_lower(char c);
int		is_digit(char c);
int		is_hexalpha(char c);

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
	int sign;

	sign = 1;
	num = 0;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		++str;
	}
	while ((digit = get_digit(to_lower(*str++), str_base)) >= 0)
		num = ((num * str_base) + (digit * sign));
	return (num);
}

/*	Gets digit from character
 *
 *  Set 'base_ascii'
 *	if 'base_len' smaller or equal to 10:
 *		set 'base_ascii' to (base_len + '0')
 *	else
 *		set 'base_ascii' to ((base_len - 10) + 'a')
 *
 *  Check if 'c' is digit or letter
 *	if 'c' is a digit AND smaller than 'base_ascii':
 *		return (c - '0')
 *	else if 'c' is a letter AND smaller than 'base_ascii':
 *		return ((c + 10) - 'a')
 *	else
 *		return (-1)
 *	*/
int get_digit(char c, int base_len)
{
	int base_ascii;

	if (base_len <= 10)
		base_ascii = (base_len + '0');
	else
		base_ascii = ((base_len - 10) + 'a');

	if (is_digit(c) && (c <= base_ascii))
		return (c - '0');
	else if (is_hexalpha(c) && (c <= base_ascii))
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

int		is_hexalpha(char c)
{
	return (((c >= 'a') && (c <= 'f')) || ((c >= 'A') && (c <= 'F')));
}
