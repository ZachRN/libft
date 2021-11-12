#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list *new;

	new = lst;
	if (!lst || !f)
		return ;
	while (lst)
	{
		(*f)(new->content);
		new = new->next;
	}
}
