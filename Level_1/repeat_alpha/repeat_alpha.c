#include <unistd.h>

void	putnchar(char c, int n);
void	repeat_alpha(char *str);
int		ft_islower(int c);
int		ft_isupper(int c);

int	main(int argc, char **argv)
{
	if (argc == 2)
		repeat_alpha(argv[1]);

	write(1, "\n", 1);
	return (0);
}

/* Parse string and print each alphabetic character as 
 * many times as the value of it's alphabetical index.
 * */
void	repeat_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_islower(str[i]))
			putnchar(str[i], (str[i] - 'a'));
		else if (ft_isupper(str[i]))
			putnchar(str[i], (str[i] - 'A'));
		else
			putnchar(str[i], 1);
		++i;
	}
}

/* Print n characters to stdout.
 * */
void	putnchar(char c, int n)
{
	while (n-- >= 0)
		write(1, &c, 1);
}

int ft_islower(int c)
{
	return ((c >= 'a') && (c <= 'z'));
}

int ft_isupper(int c)
{
	return ((c >= 'A') && (c <= 'Z'));
}
