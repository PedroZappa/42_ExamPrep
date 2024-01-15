#include <unistd.h>

int ft_isspace(char c);

int main(int argc, char *argv[])
{
	char *str;

	if (argc == 2)
	{
		str = argv[1];	
		while (ft_isspace(*str))
			++str;
		while (*str)
		{
			if (!ft_isspace(*str))
				write(1, str++, 1);
			else
				break;
		}

	}
	write(1, "\n", 1);
	return (0);
}

int ft_isspace(char c)
{
	return ((c == ' ') || (c >= 9 && c <= 13));
}
