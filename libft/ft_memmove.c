/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsaraiva <nsaraiva@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 13:07:28 by nsaraiva          #+#    #+#             */
/*   Updated: 2025/04/10 14:52:47 by nsaraiva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*c_dest;
	char	*c_src;
	size_t	i;

	if (!dest && !src)
		return (0);
	c_dest = (char *) dest;
	c_src = (char *) src;
	i = 0;
	if (dest > src)
	{
		while (n--)
			c_dest[n] = c_src[n];
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
