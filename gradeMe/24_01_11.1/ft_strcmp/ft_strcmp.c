int    ft_strcmp(char *s1, char *s2)
{
	int i;

	while (s1 && s2 && (s1[i] == s2[i]))
		++i;
	return (s1[i] - s2[i]);
}

