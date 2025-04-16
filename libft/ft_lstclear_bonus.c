#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next;
	t_list	*previus;

	if (!*lst)
		return ;
	next = *lst;
	previus = next;
	while (next)
	{
		next = next -> next;
		del(previus -> content);
		free(previus);
		previus = next;
	}
	*lst = NULL;
}

/*void	new_free(void *lst)
{
	t_list	*del;

	del = lst;
	free(del -> content);
}

int	main(void)
{
	t_list	*node1;
	t_list	*node2;
	char	*str1;
	char	*str2;

	node1 = malloc(sizeof(t_list));
	node2 = malloc(sizeof(t_list));
	str1 =  malloc(1);
	str2 =  malloc(1);
	*str1 = 'a';
	*str2 = 'b';
	node1 -> content = str1;
	node2 -> content = str2;
	node1 -> next = node2;
	node2 -> next = NULL;
	ft_lstclear(&node1, &new_free);
	return (0);
}*/
