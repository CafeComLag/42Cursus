#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;
	size_t	s_s;

	i = 0;
	s_s = ft_strlen(s);
	while(i < s_s)
	{
		f(i, &s[i]);
		i++;
	}
}
