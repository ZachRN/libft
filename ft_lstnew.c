#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*addnew;

	addnew = (t_list *)malloc(sizeof(t_list));
	if (!addnew)
		return (NULL);
	addnew->content = content;
	addnew->next = NULL;
	return (addnew);
}
