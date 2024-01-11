int ft_isspace(char c);
int ft_isdigit(char c);

int ft_atoi(const char *str)
{
	int num;
	int sign;

	num = 0;
	sign = 1;
	while (ft_isspace(*str))
		++str;
	if ((*str == '+') || (*str == '-'))
	{
		if (*str == '-')
			sign = -1;
		++str;
	}
	while (ft_isdigit(*str))
		num = (num * 10) + (*str++ - '0');
	return (num * sign);
}

int ft_isspace(char c)
{
	return ((c == ' ') || (c >= 9 && c <= 13));
}

int ft_isdigit(char c)
{
	return ((c >= '0') && (c <= '9'));
}
