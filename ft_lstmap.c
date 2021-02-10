/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstmap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: znajda <znajda@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/17 16:52:08 by znajda        #+#    #+#                 */
/*   Updated: 2021/02/10 15:56:54 by znajda        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *savefirst;
	t_list *toadd;

	if (!lst || !f)
		return (NULL);
	savefirst = NULL;
	while (l)
	{
		toadd = ft_lstnew(f(lst->content));
		if (!toadd)
		{
			ft_lstclear(&lst, del);
			ft_lstclear(&savefirst, del);
		}
		else
		{
			lst = lst->next;
			ft_lstadd_back(&savefirst, toadd);
		}
	}
	return (savefirst);
}
