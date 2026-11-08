/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichow <yichow@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 16:46:14 by yichow            #+#    #+#             */
/*   Updated: 2026/11/08 15:19:48 by yichow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *calloc(size_t nelem, size_t elsize)
{
	size_t i;
	i = 0;
	unsigned long *p;
	p = NULL;
	p = malloc(sizeof(nelem)*elsize);
	if(!p)
		return(NULL);
	while (i < nelem * elsize)
		p[i++] = 0;
	return(p);
}

