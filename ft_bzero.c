/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mide-fre <mide-fre@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 09:05:58 by mide-fre          #+#    #+#             */
/*   Updated: 2026/04/21 09:06:04 by mide-fre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *p, size_t length)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)p;
	i = 0;
	while (i < length)
	{
		ptr[i] = 0;
		i++;
	}
}
