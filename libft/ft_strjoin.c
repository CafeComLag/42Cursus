#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_s;
	int		i;

	i = 0;
	new_s = (char *) malloc((ft_strlen(s1) + ft_strlen(s2)) * sizeof(char) + 1);
	if (!new_s)
		return (0);
	while (s1[i])
	{ 
		new_s[i] = s1[i];
		i++;	
	}
	while (*s2)
	{
		new_s[i] = *s2;
		s2++;
		i++;
	}
	new_s[i] = '\0';
	return (new_s);
}
