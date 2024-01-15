#include <unistd.h>

int ft_isalpha(int c);

int main(int argc, char *argv[])
{
	char *str;

	if (argc != 2)
		write(1, "\n", 1);
	else
	{
		str = argv[1];
		while (*str)
		{
			if (ft_isalpha(*str))
			{
				if (*str >= 'a' && *str <= 'z')
					*str = ((*str - 'a') + 13) % 26 + 'a';
				else if (*str >= 'A' && *str <= 'Z')
					*str = ((*str - 'A') + 13) % 26 + 'A';
			}
			write(1, str++, 1);
		}
		write(1, "\n", 1);
	}
	return (0);
}

int ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
