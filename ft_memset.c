/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mide-fre <mide-fre@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 09:11:17 by mide-fre          #+#    #+#             */
/*   Updated: 2026/04/21 09:11:20 by mide-fre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *p, int c, size_t length)
{
	size_t			i;
	unsigned char	*ptr;
	unsigned char	value;

	ptr = (unsigned char *)p;
	value = (unsigned char)c;
	i = 0;
	while (i < length)
	{
		ptr[i] = value;
		i++;
	}
	return (p);
}
