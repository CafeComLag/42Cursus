#include "libft.h"

size_t	ft_count_words(char const *s, char c)
{
	size_t	i;

	i = 0;
	if (*s && *s != c)
	{
	   i++;
	   s++;
	}
	while (*s)
	{
		if (*s == c && *(s + 1) != c && *(s + 1))
			i++;
		s++;
	}
	return (i);
}

size_t	ft_length(char const *s, char c)
{
	size_t	len;

	len = 0;
	while(*s)
	{
		if (*s == c)
			break;
		len++;
		s++;
	}
	return (len);
}

char	*ft_fill(char const **s, char c ,char *buff)
{
	size_t	i;
	size_t l_word;
	
	while (**s && **s == c)
		(*s)++;
	l_word = ft_length(*s, c);
	buff = (char *) malloc(l_word + 1);
	i = 0;
	while (i < l_word)
	{
		buff[i] = **s;
		i++;
		(*s)++;
	}
	buff[i] = '\0';
	(*s)++;
	return (buff);
}

void	ft_free_all(char **str, size_t n)
{
	while(n--)
		free(str[n]);
	free(str);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	size_t	total_c;
	size_t	i;

	i = 0;
	total_c = ft_count_words(s, c);
	str = (char **) malloc((total_c + 1) * sizeof(char *));
	if (!str)
		return (0);
	while (i < total_c)
	{
		str[i] = ft_fill(&s, c, *str);
		if (!str[i])
		{		
			ft_free_all(str, total_c + 2);
			return (0);
		}
		i++;
	}
	str[i] = 0;
	return (str);
}

/*#include <stdio.h>
int main(void)
{
	//char s[] = "Ok EU | acho | UQe | NÃo | de";
	//char **s2 = ft_split(s, '|');
	//char s[] = "cccccCafe";
	//char sep = 'c';
	char s[] = "";
	char sep = '?';
	char **s2 = ft_split(s, sep);
	int	i = 0;

	while(s2[i])
	{
		puts(s2[i]);
		i++;
	}
	ft_free_all(s2, ft_count_words(s, '|') + 2);
}*/
