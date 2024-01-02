char	*ft_strpbrk(const char *s, const char *accept)
{
	int i;

	while (*s)
	{
		i = 0;
		while (accept[i])
		{
			if (accept[i] == *s)
				return ((char *)s);
			++i;
		}
		++s;
	}
	return (0);
}
