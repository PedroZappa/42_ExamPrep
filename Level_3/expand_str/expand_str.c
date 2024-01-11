#include <unistd.h>

int ft_ispace(char c);

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
			if (*str == '\0')
				break;
			while (!ft_ispace(*str))
			{
				write(1, str++, 1);
				if (*str == '\0')
					break;
			}
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
