#include <unistd.h>

void	putnchar(char c, int n);
void	repeat_alpha(char *str);

int	main(int argc, char **argv)
{
	if (argc == 2)
		repeat_alpha(argv[1]);

	write(1, "\n", 1);
	return (0);
}

/* Print n characters to stdout.
 * */
void	putnchar(char c, int n)
{
	while (n-- > 0)
		write(1, &c, 1);
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
		if (str[i] >= 'a' && str[i] <= 'z')
			putnchar(str[i], str[i] - 'a' + 1);
		else if (str[i] >= 'A' && str[i] <= 'Z')
			putnchar(str[i], str[i] - 'A' + 1);
		else
			putnchar(str[i], 1);
		++i;
	}
}
