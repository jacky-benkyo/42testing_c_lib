/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichow <yichow@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 15:59:35 by yichow            #+#    #+#             */
/*   Updated: 2026/11/13 16:00:00 by yichow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*m = NULL;
	size_t	len;

	str = m;
	len = 0;

	if (n < 1)
		return (0);
	while (len < n)
	{
		m[len] = (unsigned char) c;
		m++;
		len++;
	}
	return (str);
}

