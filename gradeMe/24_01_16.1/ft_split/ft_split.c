#include <stdlib.h>

int ft_isspace(char c);
char *ft_strncpy(char *dest, char *src, int n);

/* Loop through input string 
 *		Count the number of words contained in the string
 * Allocate memory for an array of pointers to store a pointer to each word
 *
 * */
char    **ft_split(char *str)
{
	char **strtab;
	int str_count;
	int strlen;
	int i;		// Input string iterator
	int word_start;		// Marks the beginning of a word

	i = 0;
	str_count = 0;
	while (str[i])
	{
		while (str[i] && ft_isspace(str[i]))
			++i;
		if (str[i])
			++str_count;
		while (str[i] && !ft_isspace(str[i]))
			++i;
	}
	strtab = malloc(sizeof(char *) * (str_count + 1));
	if (!strtab)
		return (NULL);
	i = 0;
	word_start = 0;
	str_count = 0;
	strlen = 0;
	while (str[i])
	{
		while (str[i] && ft_isspace(str[i]))
			++i;
		word_start = i;
		while (str[i] && !ft_isspace(str[i]))
			++i;
		if (i > word_start)
		{
			strlen = (i - word_start);
			strtab[str_count] = malloc(sizeof(char) * (strlen + 1));
			if (!strtab[str_count])
				return (NULL);
			ft_strncpy(strtab[str_count++], &str[word_start], strlen);
		}
	}
	strtab[str_count] = NULL;
	return (strtab);
}

int ft_isspace(char c)
{
	return (c == ' ' || c == '\n' || c == '\t');
}

char *ft_strncpy(char *dest, char *src, int n)
{
	int i;

	i = -1;
	while ((++i < n) && (src[i]))
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
