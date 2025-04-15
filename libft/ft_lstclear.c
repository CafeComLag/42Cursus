#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next;

	next = (*lst) -> next;
	while(next)
	{
		del(**)
		next = (**lst) -> next;
		lst++;
	}
	lst = NULL;
}

int	main(void)
{
	t_list	**array;
	t_list	*node1;
	t_list	*node2;
	char	*str1;
	char	str2[] = "Cafe";

	array = malloc(sizeof(t_list *) * 2);
	node1 = malloc(sizeof(t_list));
	node2 = malloc(sizeof(t_list));
	str1 = malloc(3);
	str1[0] = 'o';
	str1[1] = 'i';
	str2[2] = '\0';
	node1 -> content = str1;
	node2 -> content = str2;
	node1 -> next = node2;
	node2 -> next = NULL;
	array[0] = node1;
	array[1] = node2;
	ft_lstclear(array, &free);
	free(node2);
	return (0);
}
