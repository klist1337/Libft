/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassofi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 20:47:32 by eassofi           #+#    #+#             */
/*   Updated: 2021/11/18 00:11:26 by eassofi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del) (void *))
{
	t_list	*new;
	t_list	*node;

	if (!lst)
		return (0);
	new = ft_lstnew(f(lst->content));
	if (new == 0)
		return (0);
	node = new;
	lst = lst->next;
	while (lst)
	{
		node->next = ft_lstnew(f(lst->content));
		if (node->next == 0)
		{
			ft_lstclear(&new, del);
			return (0);
		}
		node = node->next;
		lst = lst->next;
	}
	return (new);
}
