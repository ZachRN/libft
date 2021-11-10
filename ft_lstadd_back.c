#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*toadd;

	if (!*lst)
		*lst = new;
	else
	{
		toadd = ft_lstlast(*(lst));
		toadd->next = new;
	}
}
