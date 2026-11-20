/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichow <yichow@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 16:51:32 by yichow            #+#    #+#             */
/*   Updated: 2026/11/17 14:00:35 by yichow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int chr)
{
	ssize_t	temp;
	ssize_t	pos1;

	temp = -1;
	pos1 = 0;
	while (str[pos1] != '\0')
	{
		if (str[pos1] == (char)chr)
			temp = pos1;
		pos1++;
	}
	if ((str[pos1] == (char)chr))
		return ((char *)&str[pos1]);
	if (temp != -1)
		return ((char *)&str[temp]);
	else
		return (NULL);
}
//locates the last occurrence of a character in a string
//and returns a pointer to it.
