#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*ptr;

	ptr = 0;
	if (!n || !size)
		return (ptr);
	ptr = malloc(n * size);
	if (!ptr)
		return (0);
	ft_memset(ptr, 0, n * size);
	return (ptr);
}

#include <stdio.h>
int	main(void)
{
	char *ptr;
	size_t	n = 3;
	size_t	size = sizeof(char);

	ptr = ft_calloc(n , size);
	while(n--)
	{
		printf("%d", ptr[n]);
	}
	free(ptr);
	return (0);
}
