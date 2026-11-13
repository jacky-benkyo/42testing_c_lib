/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichow <yichow@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 16:51:45 by yichow            #+#    #+#             */
/*   Updated: 2026/11/13 16:01:00 by yichow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	pos;

	if (n == 0)
		return (0);
	pos = 0;
	while (s1[pos] != '\0' && (s2[pos] != '\0') && (pos < n ))
	{
		if ((s1[pos]) != (s2[pos]))
			break ;
		pos++;
	}
	if (pos == n)
		return (0);
	return (((unsigned char)s1[pos]) - ((unsigned char)s2[pos]));
}
