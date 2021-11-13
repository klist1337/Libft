/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassofi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 15:36:57 by eassofi           #+#    #+#             */
/*   Updated: 2021/11/12 01:44:06 by eassofi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_word(const char *s, char c)
{
	int	i;
	int	wc;

	i = 1;
	wc = 0;
	if (s[0] != c)
		wc++;
	while (s[i])
	{
		if ((s[i - 1] == c && s[i] != c)
			|| (s[i - 1] != c && s[i] == '\0'))
			wc++;
		i++;
	}
	return (wc);
}

static void	set_all_memory_null(char **strs, size_t index)
{
	size_t	i;

	i = 0;
	while (i < index)
	{
		free(strs[i]);
	}
	free(strs);
	return ;
}

static char	*position(const char *s, char *ptr, char c)
{
	ptr = (char *) s;
	while (*ptr && *ptr != c)
		ptr++;
	return (ptr);
}

char	**ft_split(const char *s, char c)
{
	char	**strs;
	int		index;
	char	*ptr;

	index = 0;
	strs = (char **)malloc(sizeof(char *) * count_word(s, c) + 1);
	while (*s)
	{
		if (*s != c)
		{
			ptr = position(s, ptr, c);
			strs[index] = (char *)malloc(ptr - s + 1);
			if (strs == 0)
			{
				set_all_memory_null(strs, index);
				return (0);
			}
			ft_strlcpy(strs[index++], s, ptr - s + 1);
			s = ptr;
		}
		else
			s++;
	}
	strs[index] = 0;
	return (strs);
}
