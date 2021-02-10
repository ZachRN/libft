/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstmap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: znajda <znajda@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/17 16:52:08 by znajda        #+#    #+#                 */
/*   Updated: 2021/01/28 05:52:07 by znajda        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *l, void *(*f)(void *), void (*del)(void *))
{
	t_list *savefirst;
	t_list *toadd;

	if (!l || !f)
		return (NULL);
	savefirst = NULL;
	while (l)
	{
		toadd = ft_lstnew(f(l->content));
		if (!toadd)
		{
			ft_lstclear(&l, del);
			ft_lstclear(&savefirst, del);
		}
		else
		{
			l = l->next;
			ft_lstadd_back(&savefirst, toadd);
		}
	}
	return (savefirst);
}
