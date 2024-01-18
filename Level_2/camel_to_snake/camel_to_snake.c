
#include <unistd.h>

int ft_isupper(int c);

int main(int argc, char *argv[]) 
{
	char	*str;
	int		c;

	if (argc == 2)
	{
		str = argv[1];
		c = 0;
		while (*str)
		{
			if (ft_isupper(str[c]) && (c == 0))
				*str += 32;
			if (ft_isupper(*str) && (c != 0))
			{
				write(1, "_", 1);
				*str += 32;
			}
			write(1, str++, 1);
			++c;
		}
	}
	return (write(1, "\n", 1));
}

int ft_isupper(int c)
{
	return ((c >= 'A') && (c <= 'Z'));
}
