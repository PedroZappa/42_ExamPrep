#include <unistd.h>

int ft_ispace(char c);

/*	Expands a 'str' with three spaces between each word.
 *
 *	Skip leading white blanks
 *	Loop through the 'str'
 *		if *str is the NULL char
 *			break
 *		While the char is not a space
 *			Print it
 *			if *str is the NULL char
 *				break
 *		Set end to 0
 *		If the char in 'str' is a space
 *			While the char in 'str' is a space
 *				Increment 'str'
 *				if *str is the NULL char
 *					Set end to 1
 *			If end is 0
 *				Print three spaces
 *	Print a new line
 *	Return 0
 *	*/
int main(int argc, char **argv)
{
	char	*str;
	int		end;

	if (argc == 2)
	{
		str = argv[1];
		while (ft_ispace(*str))
			++str;
		while (*str)
		{
			while (!ft_ispace(*str))
				write(1, str++, 1);
			end = 0;
			if (ft_ispace(*str))
			{
				while (ft_ispace(*str))
				{
					++str;
					if (*str == '\0')
						end = 1;
				}
				if (!end)
					write(1, "   ", 3);
			}
		}
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
	return (0);

}

int ft_ispace(char c)
{
	return ((c == ' ') || (c == '\t'));
}
