#include <unistd.h>

int		ft_strlen(char *str);
int		ft_isspace(char c);
void	ft_printword(char *str, int word_start, int word_end, int i);

int main(int argc, char *argv[])
{
	char *str;
	int word_start;
	int word_end;
	int len;

	if (argc == 2)
	{
		str = argv[1];
		len = ft_strlen(str) - 1;
		word_end = (len);
		while (str[len] && (len >= 0))
		{
			while (!ft_isspace(str[len]) && (len >= 0))
				--len;
			word_start = len;
			ft_printword(str, word_start, word_end, len);
			--len;
			word_end = len;
			if (len >= 0)
				write(1, " ", 1);
		}
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
	return ((c == ' ') || ((c >= 9) && (c <= 13)));
}

void	ft_printword(char *str, int word_start, int word_end, int i)
{
	char *word;

	word = str + i + 1;
	while (word_start < word_end)
	{
		write(1, (word++), 1);
		++word_start;
	}
}
