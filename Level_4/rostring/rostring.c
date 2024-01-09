#include <stdlib.h>
#include <unistd.h>

int ft_isspace(char c);

/*	Display a string after rotating it one word to the left:
 *
 * If argc is larger or equal to 2
 *		Skip leading whitespace
 *		Store the beginning of the first word in 'word_start'
 *		Store end of first word in 'word_end'
 *		Loop through the remainder of the string 
 *			while current and next chars are whitespace skip them
 *			if current char is space set 'space_found' to 1
 *			Write non-whitespace char
 *		If 'space_found' 
 *			print whitespace
 *		Print first word
 *	Print newline
 * */
int main(int argc, char *argv[])
{
	char *str;
	int word_start;
	int word_end;
	int space_found;
	int c;
	
	space_found = 0;
	if (argc >= 2)
	{
		str = argv[1];
		c = 0;
		while (ft_isspace(str[c]))
			++c;
		word_start = c;
		while (str[c] && !ft_isspace(str[c]))
			++c;
		word_end = c;
		while (ft_isspace(str[c]))
			++c;
		while (str[c])
		{
			while (ft_isspace(str[c]) && ft_isspace(str[c + 1]))
				++c;
			if (ft_isspace(str[c]))
				space_found = 1;
			write(1, &str[c++], 1);
		}
		if (space_found)
			write(1, " ", 1);
		while (word_start < word_end)
			write(1, &str[word_start++], 1);
	}
	write(1, "\n", 1);
	return (0);
}

int ft_isspace(char c)
{
	return ((c == ' ') || (c == '\t'));
}
