#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*int	main(void)
{
	char buff[10];
	ft_putchar_fd('N', 0);
	ft_putchar_fd('o', 1);
	ft_putchar_fd('S', 2);
	read(0, buff, 10);
	write(1, buff, 10);
}*/
