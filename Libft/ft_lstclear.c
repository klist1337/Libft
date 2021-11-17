/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassofi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 19:48:06 by eassofi           #+#    #+#             */
/*   Updated: 2021/11/17 20:17:08 by eassofi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*node;
	t_list	*tmp;

	if (!*lst || !del)
		return ;
	node = *lst;
	while (node)
	{
		tmp = node;
		node = node->next;
		ft_lstdelone(tmp, del);
	}
	*lst = 0;
}
