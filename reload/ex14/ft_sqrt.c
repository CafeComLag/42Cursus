/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsaraiva <nsaraiva@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 14:29:56 by nsaraiva          #+#    #+#             */
/*   Updated: 2025/04/05 16:30:16 by nsaraiva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	number;

	number = 1;
	while (number * number < nb)
		number++;
	if (number * number == nb)
		return (number);
	return (0);
}

/*#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_sqrt(9));
	printf("%d\n", ft_sqrt(5));
	printf("%d\n", ft_sqrt(81));
	printf("%d\n", ft_sqrt(-6));
}*/
