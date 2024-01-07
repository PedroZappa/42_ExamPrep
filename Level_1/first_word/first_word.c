#include <unistd.h>

int ft_isspace(char c);

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		char *str = argv[1];
		while (ft_isspace(*str))
			++str;
		while (*str && !ft_isspace(*str))
			write(1, str++, 1);
	}
	write(1, "\n", 1);
	return (0);
}

int ft_isspace(char c)
{
	return (c == ' ' || c == '\n' || c == '\t');
}
