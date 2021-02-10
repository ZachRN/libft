/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstdelone.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: zachary <zachary@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/14 21:23:59 by zachary       #+#    #+#                 */
/*   Updated: 2021/02/10 15:53:07 by znajda        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	t_list *target;

	target = lst;
	if (!lst)
		return ;
	lst = lst->next;
	del(target->content);
	free(target);
	return ;
}
