/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strtrim.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: yichow <yichow@student.42heilbronn.de>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/19 16:46:14 by yichow           #+#    #+#              */
/*   Updated: 2026/11/22 15:10:30 by yichow          ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	to_trim(const char *set, char c);

static int	to_trim(const char *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	i;
	size_t	j;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (s1[i] && to_trim(set, s1[i]))
		i++;
	j = ft_strlen(s1);
	while (j > i && to_trim(set, s1[j - 1]))
		j--;
	return (ft_substr(s1, i, j - i));
}
