#include <stdlib.h>

int ft_isspace(char c);
char *ft_strncpy(char *dest, char *src, unsigned int n);

/*	Loop through input string 
 *		Skip whitespace
 *		When not whitespace count word 
 *		Skip all non whitespace chars
 *	Allocate memory for an array of pointers to store a pointer to each word
 *	Loop through the string again
 *		Skip whitespace
 *		When not whitespace save word start index
 *		Skip all non whitespace chars
 *		if current index is higher than the start_word index
 *			Calculate the length of the word
 *			Allocate memory for the word
 *			Copy the word
 *	NULL terminate the array
 *	Return the array
 *	*/
char    **ft_split(char *str)
{
	char **strtab;
	int str_count;
	int strlen;
	int i;		// Input string iterator
	int j;		// Marks the beginning of a word

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
	j = 0;
	str_count = 0;
	strlen = 0;
	while (str[i])
	{
		while (str[i] && ft_isspace(str[i]))
			++i;
		j = i;
		while (str[i] && !ft_isspace(str[i]))
			++i;
		if (i > j)
		{
			strlen = (i - j);
			strtab[str_count] = malloc(sizeof(char) * (strlen + 1));
			if (!strtab[str_count])
				return (NULL);
			ft_strncpy(strtab[str_count++], &str[j], strlen);
		}
	}
	strtab[str_count] = NULL;
	return (strtab);
}

int ft_isspace(char c)
{
	return (c == ' ' || c == '\n' || c == '\t');
}

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	int i;

	i = -1;
	while (((unsigned int)++i < n) && (src[i]))
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
