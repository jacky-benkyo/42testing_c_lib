/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichow <yichow@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 16:50:11 by yichow            #+#    #+#             */
/*   Updated: 2026/11/08 14:37:59 by yichow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
//Utility functions from BSD systems (libbsd, -lbsd)
//1. Add #include <bsd/string.h>
//2. When compile ,add -lbsd. cc -Wall -Wextra -Werror xx.c -lbsd

//strlcpy is a function used in C programming for safely copying strings.
// It copies up to size - 1 bytes from the source string
// to the destination string and ensures that
// //the destination string is always null-terminated
	size_t	pos;
	size_t	srclen;

	srclen = 0;
	while (src[srclen] != '\0')
		srclen++;
	if (size > 0)
	{
		pos = 0;
		while ((src[pos] != '\0') && (pos < size - 1))
		{
			dst[pos] = src[pos];
			pos++;
		}
		dst[pos] = '\0';
	}
	return (srclen);
}
