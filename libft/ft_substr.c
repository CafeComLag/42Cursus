#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_string;
	size_t	i;

	i = 0;
	if (start >= ft_strlen(s) || len == 0)
	{
		sub_string = (char *) malloc(sizeof(char));
		sub_string[0] = '\0';
		return (sub_string);
	}
	if (len > ft_strlen(s) - start)
		len = (size_t) ft_strlen(s) - start;
	sub_string = (char *) malloc((len + 1) * sizeof(char));
	if (!sub_string)
		return (0);
	while (s[start + i] && i < len)
	{
		sub_string[i] = s[start + i];
		i++;
	}
	sub_string[i] = '\0';
	return (sub_string);
}
