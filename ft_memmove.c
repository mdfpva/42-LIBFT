/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mide-fre <mide-fre@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 09:11:00 by mide-fre          #+#    #+#             */
/*   Updated: 2026/04/21 09:11:03 by mide-fre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
