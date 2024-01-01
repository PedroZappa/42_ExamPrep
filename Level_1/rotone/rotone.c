#include <unistd.h>

void	ft_putchar(char c);

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		ft_putchar('\n');
		return (1);
	}
	char *str = argv[1];

	while (*str)
	{
		if ((*str >= 'a' && *str <= 'y') || (*str >= 'A' && *str <= 'Y'))
			ft_putchar(*str + 1);
		else if ((*str == 'z') || (*str == 'Z'))
			ft_putchar(*str - 25);
		else
			ft_putchar(*str);
		++str;
	}
	ft_putchar('\n');
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

