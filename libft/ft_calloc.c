/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsaraiva <nsaraiva@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 13:00:54 by nsaraiva          #+#    #+#             */
/*   Updated: 2025/04/16 12:46:45 by nsaraiva.        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	unsigned char	*ptr;

	if (n > SIZE_MAX / size)
		return (NULL);
	if (!n || !size)
	{
		ptr = malloc(1);
		*ptr = 0;
		return (ptr);
	}
	ptr = malloc(n * size);
	if (!ptr)
		return (0);
	ft_memset(ptr, 0, n * size);
	return (ptr);
}
