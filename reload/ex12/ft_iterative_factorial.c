/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsaraiva <nsaraiva@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 13:05:58 by nsaraiva          #+#    #+#             */
/*   Updated: 2025/04/05 16:28:51 by nsaraiva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	n;

	n = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (nb != 1)
	{
		n *= nb;
		nb--;
	}
	return (n);
}

/*#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	if (argc)
		printf("%d", ft_iterative_factorial(atoi(argv[1])));
	return (0);
}*/
