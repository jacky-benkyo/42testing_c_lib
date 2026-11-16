/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichow <yichow@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 15:59:35 by yichow            #+#    #+#             */
/*   Updated: 2026/11/15 17:58:31 by yichow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*m;
	size_t			len;

	m = (unsigned char *) str;
	len = 0;
	while (len < n)
	{
		m[len] = (unsigned char) c;
		len++;
	}
	return ((void *)m);
}
