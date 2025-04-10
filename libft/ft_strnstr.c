/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsaraiva <nsaraiva@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 13:12:52 by nsaraiva          #+#    #+#             */
/*   Updated: 2025/04/10 16:22:53 by nsaraiva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*str_big;
	char	*str_little;

	if (!little)
		return ((char *) big);
	str_little = (char *) little;
	while (*big && --len)
	{
		str_big = (char *) big;
		while (*big == *little)
		{
			big++;
			little++;
			if (!*little)
				return (str_big);
		}
		little = str_little;
		if (*big != *little)
			big++;
	}
	return (0);
}
