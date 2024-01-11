#include <unistd.h>

char *ft_strchr(const char *str, char c);

int main(int argc, char **argv)
{
	char	ascii[256] = { 0 }; 
	char	*str1 = NULL;
	char	*str2 = NULL;
	int		i;
	int		j;

	if (argc == 3)
	{
		str1 = argv[1];
		str2 = argv[2];

		i = 0;
		while(str1[i])
		{
			j = 0;
			while (str2[j])
			{
				if ((str1[i] == str2[j]) && (ascii[(int)str1[i]] == 0))
				{
					ascii[(int)str1[i]] = 1;
					write(1, &str1[i], 1);
				}
				++j;
			}
			++i;
		}
	}
	write(1, "\n", 1);
	return (0);
}

char *ft_strchr(const char *str, char c)
{
	while (*str)
	{
		if (*str == c)
			return ((char *)str);
		++str;
	}
	return (0);
}
