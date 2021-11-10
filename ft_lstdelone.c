#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	t_list	*target;

	if (!lst)
		return ;
	target = lst;
	if (del)
	{
		lst = lst->next;
		del(target->content);
		free(target);
	}
}
