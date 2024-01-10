#include <unistd.h>

int ft_strlen(char *str);
int ft_isspace(char c);

int main(int argc, char *argv[])
{
	char *str;
	int strlen;
	int word_start;
	int word_end;

	if (argc == 2)
	{
		str = argv[1];
		strlen = ft_strlen(str);
		--strlen;
		while (ft_isspace(str[strlen]))
			--strlen;
		word_end = strlen;
		while (!ft_isspace(str[strlen]))
			--strlen;
		word_start = (strlen + 1);
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
	return ((c == ' ') || ((c >= 9) && (c <= 13)));
}
