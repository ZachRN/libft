#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char			*str;
	char			*str2;
	unsigned int	i;

	if (dest == NULL && src == NULL)
		return (NULL);
	str = (char *)dest;
	str2 = (char *)src;
	i = 0;
	while (n)
	{
		str[i] = str2[i];
		i++;
		n--;
	}
	return (dest);
}
