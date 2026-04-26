/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mide-fre <mide-fre@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 09:27:20 by mide-fre          #+#    #+#             */
/*   Updated: 2026/04/26 15:18:25 by mide-fre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_node;
	t_list	*new_lst;
	t_list	*last_node;

	if (!lst || !f || !del)
		return (NULL);
	new_lst = NULL;
	last_node = NULL;
	while (lst)
	{
		new_node = ft_lstnew(f(lst -> content));
		if (!new_node)
			return (ft_lstclear(&new_lst, del), NULL);
		if (!new_lst)
			new_lst = new_node;
		else
			last_node -> next = new_node;
		last_node = new_node;
		lst = lst -> next;
	}
	return (new_lst);
}
