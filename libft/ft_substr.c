#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_string;
	size_t		i;

	i = 0;
	sub_string = (char *) malloc(len * sizeof(char));	
	if (!sub_string)
		return (0); 
	while (s[start + i] && i < len)
	{
		sub_string[i] = s[start + i];
		i++;
	}
	return (sub_string);
}
