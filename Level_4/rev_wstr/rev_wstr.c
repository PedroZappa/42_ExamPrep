#include <unistd.h>

int ft_isspace(char c);
int ft_strlen(char *str);

/*	Print words in string in reverse order
 *
 *	Get the 'len' of input 'str';
 *	Loop through 'str' from the end;
 *		Skip spaces and the NULL character;
 *		Save 'word_end';
 *		Skip non-space characters;
 *		Save 'word_start';
 *		Set 'str_idx' to 'word_start';
 *		Print 'word_start' to 'word_end';
 *		If str_idx is not 0 
 *			Print ' '
 *	Print '\n'
 *	Return 	
 *
 *	*/
int main(int argc, char **argv)
{
	char	*str;
	int		word_start;
	int		word_end;
	int		len;
	int		str_idx;

	if (argc == 2)
	{
		str = argv[1];
		len = ft_strlen(str);
		while (len >= 0)
		{
			while (!str[len] || ft_isspace(str[len]))
				--len;
			word_end = len;
			while (str[len] && !ft_isspace(str[len]))
				--len;
			word_start = (len + 1);
			str_idx = word_start;
			while (word_start <= word_end)
				write(1, &str[word_start++], 1);
			if (str_idx != 0)
				write(1, " ", 1);
		}
	}
	write(1, "\n", 1);
	return (0);
}

int ft_isspace(char c)
{
	return ((c == ' ') || ((c >= 9) && (c <= 13)));
}

int ft_strlen(char *str)
{
	int len = 0;
	while (str[len])
		++len;
	return (len);
}
