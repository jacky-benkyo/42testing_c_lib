/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichow <yichow@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 16:52:21 by yichow            #+#    #+#             */
/*   Updated: 2026/11/15 18:07:44 by yichow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *dest, const void *src, size_t n)
{
	unsigned char	*m;
	unsigned char	*p;
	size_t			l;

	if ((!src && !dest) || (n == 0))
		return (0);
	m = (unsigned char *) src;
	p = (unsigned char *) dest;
	l = 0;
	while (l < n)
	{
		if (m[l] != p[l])
			return (((unsigned char)p[l]) - ((unsigned char)m[l]));
		l++;
	}
	return (0);
}
//Unlike strcmp(), comparison does not stop when a '\0' byte is encountered.
