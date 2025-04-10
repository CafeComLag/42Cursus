/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsaraiva <nsaraiva@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 19:55:43 by nsaraiva          #+#    #+#             */
/*   Updated: 2025/04/05 16:00:18 by nsaraiva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}

/*#include <unistd.h>

void    ft_putchar(int number)
{
        char    letter;

        letter = '0' + number;
        write(1, &letter, 1);
}

void    ft_putnbr(int nbr)
{
        int     stop;

        stop = 0;
        if (nbr == -2147483648)
        {
                write(1, "-2147483648", 12);
                stop = 1;
        }
        if (!stop)
        {
                if (nbr < 0)
                {
                        nbr *= -1;
                        write(1, "-", 1);
                }
                if (nbr / 10 != 0)
                        ft_putnbr(nbr / 10);
                ft_putchar(nbr % 10);
        }
}


int	main(void)
{
	int	tab[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}; 
	ft_foreach(tab, 10, &ft_putnbr);
	return (0);	
}*/
