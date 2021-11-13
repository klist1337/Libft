/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassofi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 11:00:53 by eassofi           #+#    #+#             */
/*   Updated: 2021/11/05 14:45:57 by eassofi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = 0;
	while (*s)
	{
		s++;
		len++;
	}
	while (len--)
	{
		if (*s == (char) c)
		{
			return ((char *) s);
		}
		s--;
	}
	if (s[0] == (char) c)
		return ((char *) s);
	return (0);
}
