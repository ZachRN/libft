/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstnew.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: zachary <zachary@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/13 20:33:12 by zachary       #+#    #+#                 */
/*   Updated: 2021/01/17 18:53:31 by znajda        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *addnew;

	addnew = malloc(sizeof(t_list));
	if (!addnew)
		return (NULL);
	addnew->content = content;
	addnew->next = NULL;
	return (addnew);
}
