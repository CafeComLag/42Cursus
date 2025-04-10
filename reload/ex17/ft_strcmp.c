/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsaraiva <nsaraiva@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 17:01:32 by nsaraiva          #+#    #+#             */
/*   Updated: 2025/04/05 16:04:56 by nsaraiva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 || *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (0);
}

/*#include <stdio.h>

int	main(int argc, char *argv[])
{
	char	a[] = "";
	char	b[] = " ";
	printf("%d\n", ft_strcmp(a, b));
	return (0);
}*/
