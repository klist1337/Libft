/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassofi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 18:31:55 by eassofi           #+#    #+#             */
/*   Updated: 2021/11/05 14:19:44 by eassofi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*p = s;

	while (n)
	{
		if (*p == (unsigned char) c)
		{
			return ((void *) p);
		}
		p++;
		n--;
	}
	return (0);
}
