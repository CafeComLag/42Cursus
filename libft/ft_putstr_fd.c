#include "libft.h"

void ft_putstr_fd(char *s, int fd)
{
	int	s_size;

	s_size = ft_strlen(s);
	write(fd, s, s_size);
}
