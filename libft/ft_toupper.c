#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return ((c - 'a') + 'A');
	return (c);
}


#include <stdio.h>
#include <ctype.h>
int	main(void)
{
	char a = 'T';
	printf("%c", ft_toupper(a));
	printf("%c", toupper(a));
}
