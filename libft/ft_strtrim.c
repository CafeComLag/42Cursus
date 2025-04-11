/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsaraiva. <nsaraiva@student.42porto.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 19:03:00 by nsaraiva.         #+#    #+#             */
/*   Updated: 2025/04/11 21:22:49 by nsaraiva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		compare(char s1,char const *ret)
{
	int	i;

	i = 0;
	while (ret[i])
	{
		if (s1 == ret[i])
			return (0);
		i++;
	}
	return (1);
}

int		count_up(char const *s1, char const *ret)
{
	int	i;
	int	j;
	int	counter;

	i = 0;
	counter = 0;
	while (compare(s1[i], ret))
	{
		j = 0;
		while (ret[j])
		{
			if (s1[i] == ret[j])
			{
				counter++;
				break;
			}
			j++;
		}
		i++;
	}
	return (counter);
}
int		count_down(char const *s1, char const *ret, int end)
{
	int	i;
	int	j;
	int	counter;

	i = 0;
	counter = 0;
	while (compare(s1[end - i], ret))
	{
		j = 0;
		while (ret[j])
		{
			if (s1[end - i] == ret[j])
			{
				counter++;
				break;
			}
			j++;
		}
		i++;
	}
	return (counter);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	s_s1;
	size_t	counter_up;
	size_t	counter_down;
	size_t	i;
	char	*str;

	i = 0;
	s_s1 = ft_strlen(s1);
	counter_up = count_up(s1, set);
	counter_down = count_down(s1, set, s_s1);
	str = malloc(s_s1 - (counter_up + counter_down) + 1);
	while(s1[counter_up + i] && counter_up + i < s_s1 - counter_down)
	{
		str[i] = s1[counter_up];
		i++;
	}
	str[i] = '\0';
	return (str);
}


/*int main (void)
{
	char *s1 = "   \t  \n\n \t\t  \n\n\nHello \t  Please\n Trim me !\n   \n \n \t\t\n  ";
 	char *s2 = "Hello \t  Please\n Trim me !";
 	char *ret = ft_strtrim(s1, " \n\t");
	free(ret);
}*/
