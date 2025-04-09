#include <stddef.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*str_big;
	char	*str_little;

	if (!little)
		return ((char *) big);
	str_little = (char *) little;
	while (*big && len--)
	{
		str_big = (char *) big;
		while (*big == *little)
		{
			big++;
			little++;
			if (!*little)
				return (str_big);
		}
		little = str_little;
		if (*big != *little)
			big++;
	}
	return (0);
}

#include <stdio.h>
int main(void)
{
	char	s1[] = "Tralalelo tralala";
	char	s2[] = "lelo";

	printf("%s", ft_strnstr(s1, s2, 15));
}
