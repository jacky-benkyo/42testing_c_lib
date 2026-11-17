/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichow <yichow@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 16:51:10 by yichow            #+#    #+#             */
/*   Updated: 2026/11/17 13:44:20 by yichow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	int		pos1;
	char	check;

	pos1 = 0;
	check = (char) ch;
	while (str[pos1] != '\0')
	{
		if ((str[pos1] == check))
			return ((char *)&str[pos1]);
		pos1++;
	}
	if ((str[pos1] == check))
		return ((char *)&str[pos1]);
	return (NULL);
}
//to find the first occurrence of a specified character in a string
