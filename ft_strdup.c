#include "libft.h"

void	ft_strcpy(char *s1, const char *s2)
{
	size_t	i;

	i = 0;
	while (s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
}

char	*ft_strdup(const char *s)
{
	char	*dest;
	size_t	len;

	len = ft_strlen(s);
	dest = (char *)malloc(len + 1);
	if (!dest)
		return (0);
	ft_strcpy(dest, s);
	return (dest);
}
