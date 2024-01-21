#include <unistd.h>

int ft_isspace(char c);
int ft_strlen(char *str);

/*	Displays a string with exactly one space between each word, 
 *	without leading or trailing blanks.
 *
 *	*/
int main(int argc, char **argv)
{
	char *str;
	int space_flag;
	int len;
	int i;

	if (argc == 2)
	{
		str = argv[1];
		len = ft_strlen(str);
		i = 0;
		while (*str)
		{
			while (ft_isspace(str[i]) && str[i])
				++i;
			while (!ft_isspace(str[i]) && str[i])
			{
				space_flag = 0;
				write(1, &str[i++], 1);
			}
			if (ft_isspace(str[i]) && !space_flag)
			{
				space_flag = 1;
				if (i != (len - 1))
					write(1, " ", 1);
			}
			else
				break;
			++i;
			if (str[i] == '\0')
				break;
		}
	}
	write(1, "\n", 1);
	return (0);
}

int ft_isspace(char c)
{
	return (c == ' ' || (c >= 9 && c <= 13));
}

int ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
		++i;
	return (i);
}
