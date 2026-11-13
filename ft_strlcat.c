/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichow <yichow@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 16:50:05 by yichow            #+#    #+#             */
/*   Updated: 2026/11/13 16:00:45 by yichow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// adds the source string after the destination string and appends a null terminator at the end.
char	*ft_strcat(char *dest, const char *src)
{
	unsigned int	pos1;
	unsigned int	pos2;

	pos1 = 0;
	while (dest[pos1] != '\0')
		pos1++;
	pos2 = 0;
	while (src[pos2] != '\0')
	{
		dest[pos1 + pos2] = src[pos2];
		pos2++;
	}
	dest[pos1 + pos2] = '\0';
	return (dest);
}


