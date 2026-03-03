#ifndef LIBFT_H
# define LIBFT_H

// includes

# include <stddef.h>

// libc functions
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_strlen(const char *s);
int		ft_atoi(const char *str);
int		ft_toupper(int c);
int		ft_tolower(int c);
void	*ft_memset(void *p, int c, size_t length);

#endif
