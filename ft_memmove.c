/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichow <yichow@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 16:49:20 by yichow            #+#    #+#             */
/*   Updated: 2026/11/13 17:26:13 by yichow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


//memmove() copies the data first to an intermediate buffer, then from the buffer to destination.
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	{
	const unsigned char	*m = NULL;
	unsigned char	*p = NULL;
	size_t	l;
	size_t	len;

	m = (unsigned char *) src;
	p = (unsigned char *) dest;
	l = 0;

	//get strlen
	len = ft_strlen((const char *)src);

	if (len == 0)
		return (void *)dest;
	while(l < n)
	{
		if (p[l] == m[l])
			l++;
	}
	return ((void*)&p[l]);
}
}

//char source[] = "Hello, world!";
//char destination[20];

//memmove(destination, source, strlen(source) + 1);
