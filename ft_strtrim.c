/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichow <yichow@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 16:46:14 by yichow            #+#    #+#             */
/*   Updated: 2026/11/10 18:18:48 by yichow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


static int to_trim(const char *set, char c);
static char *new_str(const char *s1, size_t start, size_t end);

static int to_trim(const char *set, char c)
{
	int i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

static char *new_str(const char *s1, size_t start, size_t len)
{
	char *new_str;
	size_t i;

	if (len <= 0 || start >= ft_strlen(s1))
		return (ft_strdup(""));
	new_str = ft_calloc(len + 1, sizeof(char));
	if (!new_str)
		return (NULL);
	i = 0;

	while (i < len)
	{
		new_str[i] = s1[start + i];
		i++;
	}

	return (new_str);
}

char *ft_strtrim(const char *s1, const char *set)
{
	int i;
	int j;

	i = 0;
	j = ft_strlen(s1) - 1;
	if (ft_strlen(s1) == 0)
		return (ft_strdup(""));

	while (to_trim(set, s1[i]))
		i++;
	while (to_trim(set, s1[j]))
		j--;

	return (new_str(s1, i, j - (i - 1)));
}


