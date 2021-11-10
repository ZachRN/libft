#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*str;
	unsigned char	*test;

	str = (unsigned char *)dest;
	test = (unsigned char *)src;
	if (dest > src)
	{
		while (n > 0)
		{
			str[n - 1] = test[n - 1];
			n--;
		}
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
