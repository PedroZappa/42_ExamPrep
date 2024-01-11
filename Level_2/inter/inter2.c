#include <unistd.h>

int		ft_strchr(const char *str, char c);

/*	SEGVing when riding pointers instead of using indexed.
 *	Needs DEBUG!!
 *	*/
int main(int argc, char **argv)
{
	char	ascii[256] = { 0 };
	char	*str1;
	char	*str2;

	if (argc == 3)
	{
		str1 = argv[1];
		str2 = argv[2];

		while (*str1)
		{
			while (*str2)
			{
				if ((*str1 == *str2) && (ascii[(int)(*str1)] == 0))	
				{
					ascii[(int)(*str1)] = 1;
					write(1, &(*str1), 1);
				}
				++str2;
			}
			++str1;
		}
	}
	write(1, "\n", 1);
}

int		ft_strchr(const char *str, char c)
{
	while (*str)
	{
		if (*str == c)
			return (1);
		++str;
	}
	return (0);
}

