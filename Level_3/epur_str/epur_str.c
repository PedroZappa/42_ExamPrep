#include <unistd.h>

int ft_isspace(char *str);

/*	Displays a string with exactly one space between each word, 
 *	without leading or trailing blanks.
 *
 *	Get the 'len' of 'str'
 *	Loop through the 'str'
 *		Skip leading spaces
 *		Loop while the '*str' is not space
 *			Set 'space_flag' to 0
 *			Write the char in '*str'
 *		If the char is a space and the 'space_flag' is 0
 *			Set 'space_flag' to 1
 *			if the next char is '\0'
 *				break
 *			Print a space
 *		else
 *			break
 *		Increment the 'str'
 *	Print a new line
 *	*/
int main(int argc, char **argv)
{
	char	*str;
	int		space_flag = 0;
	int		len;

	if (argc == 2)
	{
		str = argv[1];
		len = 0;
		while (str[len])
			++len;
		while (*str)
		{
			while (ft_isspace(str))
				++str;
			while (*str && !ft_isspace(str))
			{
				space_flag = 0;
				write(1, str++, 1);
			}
			if (*str && ft_isspace(str) && !space_flag)
			{
				space_flag = 1;
				if (*(str + 1) == '\0')
					break;
				write(1, " ", 1);
			}
			else
				break;
			++str;
		}
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
	return (0);
}

int ft_isspace(char *str)
{
	if (*str == ' ' || *str == '\t')
		return (1);
	return (0);
}
