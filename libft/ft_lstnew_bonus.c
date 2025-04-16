/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsaraiva <nsaraiva@sutdent.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 14:20:10 by nsaraiva.         #+#    #+#             */
/*   Updated: 2025/04/16 14:34:43 by nsaraiva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = (t_list *) malloc(sizeof(t_list));
	if (!node)
		return (0);
	node -> content = content;
	node -> next = NULL;
	return (node);
}

/*#include <stdio.h>

int	main(void)
{
	t_list	*node;

	node = ft_lstnew("Hello Wolrd");
	puts(node->content);
	if(!node->next)
		printf("TheEnd\n");
}*/
