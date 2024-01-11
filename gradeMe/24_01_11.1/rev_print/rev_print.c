#include <unistd.h>

int ft_strlen(char *str);

int main(int argc, char *argv[])
{
	char *str;
	int len;

	if (argc == 2)
	{
		str = argv[1];
		len = ft_strlen(str);

		--len;
		while (len >= 0)
			write(1, &str[len--], 1);
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
