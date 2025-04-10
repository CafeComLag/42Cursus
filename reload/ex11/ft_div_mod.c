/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsaraiva <nsaraiva@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 13:53:46 by nsaraiva          #+#    #+#             */
/*   Updated: 2025/04/05 15:45:17 by nsaraiva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*#include <stdio.h>

int	main(void)
{
	int	a = 100;
	int	b = 5;
	int	div;
	int	mod;

	ft_div_mod(a, b, &div, &mod);
	printf("div: %d\nmod: %d\n", div, mod);
	return (0);
}*/
