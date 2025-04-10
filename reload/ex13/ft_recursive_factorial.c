/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsaraiva <ft_recursive_factorial.c>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 14:03:41 by nsaraiva          #+#    #+#             */
/*   Updated: 2025/04/05 18:16:38 by nsaraiva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb == 1 || nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	nb *= ft_recursive_factorial(nb - 1);
	return (nb);
}

/*#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_recursive_factorial(1));
	printf("%d\n", ft_recursive_factorial(5));
	printf("%d\n", ft_recursive_factorial(0));
	printf("%d\n", ft_recursive_factorial(-89));
	return (0);
}*/
