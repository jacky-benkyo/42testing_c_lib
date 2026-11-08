/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichow <yichow@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 16:52:21 by yichow            #+#    #+#             */
/*   Updated: 2026/11/08 15:28:50 by yichow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//Unlike strcmp(), comparison does not stop when a '\0' byte is encountered.
int ft_memcmp(const void *dest, const void *src, size_t n)
{
	const unsigned char *m = NULL;
	unsigned char *p = NULL;
	m = (unsigned char *) src;
	p = (unsigned char *) dest;
	size_t l;
	l = 0;

	//why do I need to set p as just normal pointer instead of constant pointer
	if (p[l] == '\0')
		return 0;

	while(l < n)
	{
		if (m[l] != p[l])
			break;
		l++;
	}
	return (((unsigned char)p[l]) - ((unsigned char)m[l]));
}

