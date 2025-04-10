/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsaraiva <nsaraiva@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 12:26:02 by nsaraiva          #+#    #+#             */
/*   Updated: 2025/04/05 16:02:42 by nsaraiva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_is_negative(int nb)
{
	char	letter;

	if (nb < 0)
		letter = 'N';
	else
		letter = 'P';
	ft_putchar(letter);
}

/*#include <stdlib.h>
#include <stdio.h>

int	main(void)
{
	char	num[2];

	while(1)
	{
		scanf("%s", num);
		ft_is_negative(atoi(num));
		write(1, "\n", 1);
	}
	return (0);
}*/
