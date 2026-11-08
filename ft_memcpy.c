/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichow <yichow@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 16:49:33 by yichow            #+#    #+#             */
/*   Updated: 2026/11/08 15:30:50 by yichow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	const unsigned char *m = NULL;
	unsigned char *p = NULL;
	size_t l;

	l = 0;
	m = (unsigned char *) src;
	p = (unsigned char *) dest;

	while(l < n)
	{
		if (p[l] == m[l])
			l++;
	}
	return ((void*)&p[l]);
}

