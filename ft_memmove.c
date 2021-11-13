/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassofi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 13:11:41 by eassofi           #+#    #+#             */
/*   Updated: 2021/11/03 16:18:26 by eassofi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	void		*p;
	char		*d;
	const char	*s;
	char		*lastd;
	const char	*lasts;

	s = src;
	d = dst;
	p = dst;
	if (d < s)
	{
		while (len--)
			*d++ = *s++;
	}
	else
	{
		lastd = d + (len - 1);
		lasts = s + (len - 1);
		while (len--)
			*lastd-- = *lasts--;
	}
	return (p);
}
