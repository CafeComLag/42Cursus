//#include <stddef.h>
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*str;

	str = s;
	while (n--)
	{
		str[n] = '\0';
	}
}

/*#include <stdio.h>
#include <strings.h>
int	main(void)
{
	char str[] = "Walking is Wonderfull";

	ft_bzero(str+17, sizeof("full"));
	puts(str);
	return (0);
}*/
