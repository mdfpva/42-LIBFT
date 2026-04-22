/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mide-fre <mide-fre@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 09:06:11 by mide-fre          #+#    #+#             */
/*   Updated: 2026/04/21 09:06:14 by mide-fre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*ptr;
	size_t	total_size;

	if (n != 0 && size > (SIZE_MAX / n))
		return (0);
	if (n == 0 || size == 0)
		return (malloc(1));
	total_size = n * size;
	ptr = malloc(total_size);
	if (!ptr)
		return (0);
	ft_bzero(ptr, total_size);
	return (ptr);
}
