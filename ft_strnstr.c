/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichow <yichow@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 16:52:41 by yichow            #+#    #+#             */
/*   Updated: 2026/11/08 15:46:30 by yichow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

//locates the first occurrence of the  null-terminated string  little  in  the  string big,
//where not more than len characters are searched
char *ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	pos1;

	pos1 = 0;
	while (pos1 < len)
	{
		if (big[pos1] == little[0])
		{
			return((char *)&big[pos1]);
		}
		pos1++;
	}
	return NULL;
}

