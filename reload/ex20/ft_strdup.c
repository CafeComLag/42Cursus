/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsaraiva <nsaraiva@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 12:06:31 by nsaraiva          #+#    #+#             */
/*   Updated: 2025/04/04 12:06:49 by nsaraiva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *src)
{
	int	len;

	len = 0;
	while (*src)
	{
		len++;
		src++;
	}
	return (len);
}

char	*ft_strdup(char	*src)
{
	char	*duplicated;
	char	*start;

	duplicated = (char *)malloc((ft_strlen(src) + 1) * sizeof(char));
	if (!duplicated)
		return (0);
	start = duplicated;
	while (*src)
	{
		*duplicated = *src;
		duplicated++;
		src++;
	}
	*duplicated = '\0';
	duplicated = start;
	return (duplicated);
}
