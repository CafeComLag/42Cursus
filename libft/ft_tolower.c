#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return ((c - 'A') + 'a');
	return (c);
}


#include <stdio.h>
#include <ctype.h>
int	main(void)
{
	char a = 'A';
	printf("%c", ft_tolower(a));
	printf("%c", tolower(a));
}
