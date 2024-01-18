#include <unistd.h>

int ft_isspace(char c);

/*	Print words in string in reverse order
 *
 *	Get the 'len' of input 'str';
 *	Loop through 'str' from the end;
 *		Skip spaces and the NULL character;
 *		Save 'word_end';
 *		Skip non-space characters;
 *		Save 'word_start';
 *		Set 'flag' to 'word_start';
 *		Print 'word_start' to 'word_end';
 *		If flag is not 0 
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
	int		flag;

	len = 0;
	flag = 0;
	if (argc == 2)
	{
		str = argv[1];
		while (str[len])
			++len;
		while (len >= 0)
		{
			while (!str[len] || ft_isspace(str[len]))
				--len;
			word_end = len;
			while (str[len] && !ft_isspace(str[len]))
				--len;
			word_start = (len + 1);
			flag = word_start;
			while (word_start <= word_end)
				write(1, &str[word_start++], 1);
			if (flag != 0)
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

