
void	*ft_memchr(const void *s, int c, size_t n)
{
	while (--n)
	{
		if (*s == c)
			return ((char *) s);
		s++;
	}
	return (0);
}
