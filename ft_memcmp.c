#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str;
	unsigned char	*str2;

	str = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (n > 1)
	{
		if (*str != *str2)
			break ;
		str++;
		str2++;
		n--;
	}
	return (*str - *str2);
}
