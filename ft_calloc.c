/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichow <yichow@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 16:46:14 by yichow            #+#    #+#             */
/*   Updated: 2026/11/13 15:52:58 by yichow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nelem, size_t elsize)
{
	size_t	i;
	unsigned long	*p;
	i	= 0;

	p	= malloc(nelem * elsize);
	if (!p)
		return(NULL);
	while (i < (nelem * elsize))
	{
		p[i] = 0;
		i++;
	}
	return(p);
}
