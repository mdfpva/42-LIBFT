#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t length)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	if (!dest && !src)
		return (0);
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	i = 0;
	while (i < length)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
