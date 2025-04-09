#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*c_dest;
	char	*c_src;
	size_t		i;

	c_dest = (char *) dest;
	c_src = (char *) src;
	i = 0;
	while (i < n)
	{
		c_dest[i] = c_src[i];
		i++;
	}
	return (dest);
}

#include <stdio.h>
#include <string.h>

int main ()
{
  char str[] = "memcpy can be very useful......";
  memcpy(str+14, str+19, 10);
  puts (str);
  return 0;
}
