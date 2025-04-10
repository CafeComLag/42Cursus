/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsaraiva <nsaraiva@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 15:39:30 by nsaraiva          #+#    #+#             */
/*   Updated: 2025/04/10 18:41:14 by nsaraiva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size) 
{
	size_t	s_dst;
	size_t	s_src;
	size_t	i;

	i = 0;
	s_dst = ft_strlen(dst);
	s_src = ft_strlen(src);
	if (size > s_src)
		return (s_src + s_dst);
	while (src[i] && i < size - s_dst - 1)
	{
		dst[i + s_dst] = src[i];
		i++;
	}
	dst[s_dst + i] = '\0';
	return (s_src + size);
}
