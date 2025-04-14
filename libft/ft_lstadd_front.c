#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new -> next = *lst;
	*lst = new;
}

/*#include <stdio.h>
int	main(void)
{
	t_list **ptr_node;
	t_list	*node1;
	t_list	*node2;
	char	fruta[] = "ABACAXI";
	char	bolo[] = "BOLO";
	int		i = 2;

	node1 = malloc(sizeof(t_list));
	node2 = malloc(sizeof(t_list));
	ptr_node = malloc(sizeof(t_list *) * 2);

	(*ptr_node) = node1;
	node1 -> content = &fruta;
	node1 -> next = NULL;
	node2 -> content =  &bolo;
	node2 -> next = NULL;
	ft_lstadd_front(ptr_node, node2);
	printf("%s de %s\n",(char *) (*ptr_node) -> content,(char *) (*ptr_node) -> next -> content);
	free(node1);
	free(node2);
	free(ptr_node);
}*/
