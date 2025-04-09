#include "libft.h";

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	s_src;
	size_t	s_dst;
	size_t	i;

	i = 0;
	s_src = ft_strlen(src);
	s_dst = ft_strlen(dst);
	if (s_dst >= size)
		return (s_src + size);
	while (src[i] && i < size - s_dst  - 1)
	{
		dst[s_dst + i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (s_src + s_dst);
}
