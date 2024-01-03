#include <unistd.h>

int ft_isspace(char *str);

int main(int argc, char **argv)
{
	char	*str;
	int		space_flag = 0;

	if (argc == 2)
	{
		str = argv[1];
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
				if (*(++str) == '\0')
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
