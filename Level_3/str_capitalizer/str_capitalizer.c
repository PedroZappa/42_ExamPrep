#include <unistd.h>

void str_capitalizer(char *str);
int ft_isspace(char c);
int ft_isupper(char c);
int ft_islower(char c);

int main(int argc, char **argv)
{
	int n;

	if (argc >= 2)
	{
		n = 1;
		while (argv[n])
		{
			str_capitalizer(argv[n++]);
			write(1, "\n", 1);
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}

void str_capitalizer(char *str)
{
	if (ft_islower(*str))
		*str += ('A' - 'a'); // (65 - 97) = -32
	write(1, str++, 1);
	while (*str)
	{
		if (ft_isupper(*str))
			*str += ('a' - 'A'); // (97 - 65) = 32
		if (ft_islower(*str) && ft_isspace(*(str - 1)))
			*str += ('A' - 'a'); // (65 - 97) = -32
		write(1, str++, 1);
	}
}

int ft_isspace(char c)
{
	return ((c == ' ') || ((c >= 9) && (c <= 13)));
}

int ft_isupper(char c)
{
	return ((c >= 'A') && (c <= 'Z'));
}

int ft_islower(char c)
{
	return ((c >= 'a') && (c <= 'z'));
}

