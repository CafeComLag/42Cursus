#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*c_dest;
	char	*c_src;
	size_t	i;

	c_dest = (char *) dest;
	c_src = (char *) src;
	i = 0;
	if (dest > src)
	{
		while (n--)
			c_dest[n] = c_src[n];
	}
	else 
	{
		while (i < n)
			c_dest[i] = c_src[i];
	}
	return (dest);
}

#include <stdio.h>
#include <string.h>

int main ()
{
  char str[] = "memmove can be very useful......";
  memmove(str+20, str+15, 11);
  puts (str);
  return 0;
}
