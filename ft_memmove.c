#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t length)
{
	unsigned char	*d;
	unsigned char	*s;

	if (!dest && !src)
		return (0);
	if (dest < src)
		return (ft_memcpy(dest, src, length));
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	d += length;
	s += length;
	while (length--)
		*(--d) = *(--s);
	return (dest);
}
