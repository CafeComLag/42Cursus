/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsaraiva. <nsaraiva@student.42porto.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 17:25:57 by nsaraiva.         #+#    #+#             */
/*   Updated: 2025/04/15 21:16:51 by nsaraiva.        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*node;
	t_list	*t_node;

	if (!lst)
		return (NULL);
	node = ft_lstnew(f(lst -> content));
	if (!node)
	{
		ft_lstdelone(node, del);
		return (NULL);
	}
	t_node = node;
	lst = lst -> next;
	while (lst)
	{
		t_node -> next = ft_lstnew(f(lst -> content));
		if (!(t_node -> next))
		{
			ft_lstdelone(t_node -> next, del);
			return (t_node);
		}
		lst = lst -> next;
		t_node = t_node -> next;
	}
	return (node);
}

/*#include <string.h>

void	*my_len(void *lst)
{
	return (void *)strlen(lst);
}

int	main(void)
{
	t_list	*node1;
	t_list	*node2;
	char	*a;

	a = malloc(1);
	*a = 'A';
	node1 = ft_lstnew(a);
	node2 = ft_lstmap(node1, my_len, NULL);
	free(node2);
	free(node1);
}*/

/*include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*res;
	void	*test;

	if (!lst)
		return (NULL);
	//test = f(lst -> content)
	//node = ft_lstnew(test);
	//t_node = node;
	//if (!node)
	//	ft_lstdelone(t_node, del);
	//lst = lst -> next;
	res = ft_lstnew(lst->content);
	res->next = lst->next;
	while (res)
	{
		test = f(lst -> content);
		if (!test)
		{
			ft_lstdelone(res, del);
			break ;
		}
		res -> content = test;
		res = lst->next;
	}
	return (res);
}*/
