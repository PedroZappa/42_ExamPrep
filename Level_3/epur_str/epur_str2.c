#include <unistd.h>

int ft_isspace(char c);
//int ft_strlen(char *str);

/*	Displays a string with exactly one space between each word, 
 *	without leading or trailing blanks.
 *
 *	*/

int	main(int argc, char **argv)
{
	char	*str;
	int		end;

	if (argc == 2)
	{
		str = argv[1];
		end = 0;
		while (*str && ft_isspace(*str))
			str++;
		while (*str)
		{
			while (!ft_isspace(*str))
				write(1, str++, 1);
			while (ft_isspace(*str))
			{
				++str;
				if (*str == '\0')
					end = 1;
			}
			if (!end)
				write(1, " ", 1);
		}
	}
	write(1, "\n", 1);
	return (0);
}

int ft_isspace(char c)
{
	return (c == ' ' || (c >= 9 && c <= 13));
}
