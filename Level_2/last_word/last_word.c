#include <unistd.h>

int ft_strlen(char *str);
int ft_isspace(char c);

int main(int argc, char *argv[])
{
	char	*str = NULL;
	int		len;
	int		word_start;
	int		word_end;

	if (argc == 2)
	{
		str = argv[1];
		len = ft_strlen(str);
		if (str)
		{
			while (ft_isspace(str[len--]))
				;
			word_end = len;
			while (!ft_isspace(str[len--]))
				;
			word_start = (len + 2);
		}
		while (word_start <= word_end)
			write(1, &str[word_start++], 1);
	}
	write(1, "\n", 1);
	return (0);
}

int ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len])
		++len;
	return (len);
}

int ft_isspace(char c)
{
	return ((c == ' ') || (c == '\t'));
}

// int ft_printable(char c)
// {
// 	return (());
// }
