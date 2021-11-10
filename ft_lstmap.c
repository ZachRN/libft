#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*savefirst;
	t_list	*toadd;

	if (!lst || !f)
		return (NULL);
	savefirst = NULL;
	while (lst)
	{
		toadd = ft_lstnew(f(lst->content));
		if (!toadd)
		{
			ft_lstclear(&savefirst, del);
			return (NULL);
		}
		else
		{
			lst = lst->next;
			ft_lstadd_back(&savefirst, toadd);
		}
	}
	return (savefirst);
}
