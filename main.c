#include "./libft/libft.h"
#include <stdio.h>
#include <bsd/string.h> 

int	main(void)
{
	// ft_strlcat test.
 	char *str = "the cake is a lie !\0I'm hidden lol\r\n";
 	char buff1[0xF00] = "there is no stars in the sky";
 	char buff2[0xF00] = "there is no stars in the sky";
 	size_t max = strlen("the cake is a lie !\0I'm hidden lol\r\n") + 4;
 
 	strlcat(buff1, str, max);
 	ft_strlcat(buff2, str, max);
	printf("%s\n%s\n", buff1, buff2);
}
