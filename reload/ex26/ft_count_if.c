/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsaraiva <nsaraiva@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 20:24:14 by nsaraiva          #+#    #+#             */
/*   Updated: 2025/04/04 21:04:51 by nsaraiva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	passed;

	passed = 0;
	while (*tab)
	{
		if (f(*tab))
			passed++;
		tab++;
	}
	return (passed);
}

/*int	test(char *str)
{
	int	i;
	
	i = 0;
	while (*str)
	{
		i++;	
		str++;
	}
	if (i == 2)
		return (1);
	return (0);
}

#include <stdio.h>

int	main(void)
{
	char	*str[] = {"oi", "ad", "acd", "oi", 0};
	
	printf("%d", ft_count_if(str, &test));
	return (0);
}*/
