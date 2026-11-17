/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichow <yichow@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 16:50:05 by yichow            #+#    #+#             */
/*   Updated: 2026/11/17 18:57:11 by yichow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	i;

	src_len = ft_strlen(src);
	if (dstsize == 0)
		return (src_len);
	dest_len = 0;
	while (dest_len < dstsize && dest[dest_len] != '\0')
		dest_len++;
	if (dstsize <= dest_len)
		return (dstsize + src_len);
	i = 0;
	while (src[i] != '\0' && (dest_len + i + 1) < dstsize)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}
// adds the source string after the destination string
//and appends a null terminator at the end.
