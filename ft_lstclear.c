#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*clear;

	if (!*lst)
		return ;
	if (del)
	{
		while (*lst)
		{
			clear = (*lst)->next;
			ft_lstdelone(*lst, del);
			(*lst) = clear;
		}
	}
	return ;
}
