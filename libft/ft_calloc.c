/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsaraiva <nsaraiva@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 13:00:54 by nsaraiva          #+#    #+#             */
/*   Updated: 2025/04/10 13:01:30 by nsaraiva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*ptr;

	ptr = 0;
	if (!n || !size)
		return (ptr);
	ptr = malloc(n * size);
	if (!ptr)
		return (0);
	ft_memset(ptr, 0, n * size);
	return (ptr);
}
