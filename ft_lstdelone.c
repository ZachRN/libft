/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstdelone.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: zachary <zachary@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/14 21:23:59 by zachary       #+#    #+#                 */
/*   Updated: 2021/01/14 22:39:12 by zachary       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	t_list *delete;

	if (!lst)
		return ;
	delete = lst;
	if (del)
	{
		lst = lst->next;
		del(delete->content);
		free(delete);
	}
	return ;
}
