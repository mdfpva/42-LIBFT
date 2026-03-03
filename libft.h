#ifndef LIBFT_H
# define LIBFT_H

// libc functions
int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
int	ft_strlen(const char *s);
void    *ft_memset(void *p, int c, int length);
int	ft_atoi(const char *str);
int	ft_toupper(int c);
int	ft_tolower(int c);

#endif
