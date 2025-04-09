#include "libft.h";

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	s_src;
	size_t	i;

	i = 0;
	s_src = ft_strlen(src);
	if (size > 0)
	{
		while (src[i] && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (s_src);
}
