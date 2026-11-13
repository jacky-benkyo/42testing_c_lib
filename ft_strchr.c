/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichow <yichow@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 16:51:10 by yichow            #+#    #+#             */
/*   Updated: 2026/11/13 19:16:47 by yichow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//to find the first occurrence of a specified character in a string.
char	*ft_strchr(const char *str, int ch)
{
	int	pos1;
	char check;


	pos1 = 0;
	//int to char
	check = (char) ch;

	while (str[pos1]!= '\0')
	{
		if ((str[pos1] == check))
			return ((char*)&str[pos1]);
		pos1++;
	}
	//case '\0'
	if ((str[pos1] == check))
		return ((char*)&str[pos1]);

	return NULL;
}
