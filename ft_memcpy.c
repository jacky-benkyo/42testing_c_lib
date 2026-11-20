/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichow <yichow@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 16:49:33 by yichow            #+#    #+#             */
/*   Updated: 2026/11/17 13:36:15 by yichow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const unsigned char	*m;
	unsigned char	*p;
	size_t			l;

	if (!src && !dest)
		return (NULL);
	l = 0;
	m = (const unsigned char *) src;
	p = (unsigned char *) dest;
	while (l < n)
	{
		p[l] = m[l];
		l++;
	}
	return ((void *) dest);
}
