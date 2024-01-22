#include <unistd.h>

int ft_islower(int c);
int ft_isupper(int c);

int main(int argc, char *argv[])
{
	char *str;

	if (argc == 2)
	{
		str = argv[1];
		if (ft_isupper(*str))
		{
			*str += 32;
			write(1, str++, 1);
		}
		while (*str)
		{
			if (*str == '_')
			{
				++str;
				if (ft_islower(*str))
					*str -= 32;
				write(1, str++, 1);
			}
			else
				write(1, str++, 1);
		}
	}
	write(1, "\n", 1);
	return (0);
}

int ft_islower(int c)
{
	return ((c >= 'a') && (c <= 'z'));
}

int ft_isupper(int c)
{
	return ((c >= 'A') && (c <= 'Z'));
}

