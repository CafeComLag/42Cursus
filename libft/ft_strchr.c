
char	*ft_strchr(const char *s, int c)
{
	while(*s)
	{
		if (*s == c)
			return ((char *) s);
		s++;
	}
	return (0);
}

#include <stdio.h>
int	main(void)
{
	char aba[] = "ABACAXI";
	
	printf("%s", ft_strchr(aba, 'C'));
}
