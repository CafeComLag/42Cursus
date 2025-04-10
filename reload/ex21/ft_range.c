/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsaraiva <nsaraiva@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 12:06:58 by nsaraiva          #+#    #+#             */
/*   Updated: 2025/04/04 12:44:16 by nsaraiva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	i;

	i = 0;
	if (min >= max)
		return (0);
	array = (int *)malloc((max - min) * sizeof(int));
	if (!array)
		return (0);
	while (min < max)
	{
		array[i] = min;
		min++;
		i++;
	}
	return (array);
}
