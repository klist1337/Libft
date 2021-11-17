/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassofi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 23:28:27 by eassofi           #+#    #+#             */
/*   Updated: 2021/11/11 15:06:31 by eassofi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, char const *set)
{
	char	*start_ptr;
	char	*end_ptr;
	char	*str_trim;

	if (s1 == 0)
		return (0);
	if (!set)
		return (ft_strdup(s1));
	start_ptr = (char *)s1;
	while (start_ptr && ft_strchr(set, *start_ptr))
		start_ptr++;
	end_ptr = (char *) s1;
	while (*end_ptr)
		end_ptr++;
	end_ptr--;
	while (end_ptr > start_ptr && ft_strchr(set, *end_ptr))
		end_ptr--;
	if (start_ptr > end_ptr || !(*start_ptr))
		return (ft_strdup(""));
	str_trim = (char *) malloc((end_ptr - start_ptr + 1) + 1);
	if (str_trim == 0)
		return (0);
	ft_strlcpy(str_trim, start_ptr, (end_ptr - start_ptr + 1) + 1);
	return (str_trim);
}
