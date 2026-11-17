/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichow <yichow@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 16:49:20 by yichow            #+#    #+#             */
/*   Updated: 2026/11/17 13:36:52 by yichow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*m;
	unsigned char	*p;
	size_t			l;

	if (!src && !dest)
		return (NULL);
	m = (unsigned char *) src;
	p = (unsigned char *) dest;
	l = 0;
	if (p +(n) > m + (n))
	{
		while (0 < n--)
			p[n] = m[n];
	}
	else
	{
		while (n > l++)
			p[l - 1] = m[l - 1];
	}
	return ((void *)dest);
}
//memmove() copies the data first to an intermediate
//buffer, then from the buffer to destination.
