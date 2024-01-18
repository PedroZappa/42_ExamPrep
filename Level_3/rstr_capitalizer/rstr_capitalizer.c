#include <unistd.h>

void rstr_capitalize(char *str);
int ft_isspace(char c);
int ft_isupper(char c);
int ft_islower(char c);

int main(int argc, char **argv)
{
	int n;

	if (argc >= 2)
	{
		n = 1;
		while (n < argc)
		{
			rstr_capitalize(argv[n++]);
			write(1, "\n", 1);
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}

void rstr_capitalize(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (ft_isupper(str[i]))
			str[i] += 32;
		if ((ft_islower(str[i]) && ft_isspace(str[i+1])) || str[i+1] == '\0')
			str[i] -= 32;
		write(1, &str[i++], 1);
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

