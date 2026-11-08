/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichow <yichow@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 16:52:06 by yichow            #+#    #+#             */
/*   Updated: 2026/11/08 15:27:20 by yichow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *str;
	size_t l;
	unsigned char intchar;

	/* converting both s and c to unsigned char */
    str = (unsigned char *) s;
    intchar = (unsigned char) c;
    l = 0;

	while(l < n)
	{
		if (str[l] == intchar)
			return ((void*)&str[l]);
		l++;
	}
	return NULL;
}
