/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichow <yichow@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 16:51:32 by yichow            #+#    #+#             */
/*   Updated: 2026/11/08 15:46:41 by yichow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//locates the last occurrence of a character in a string and returns a pointer to it.
char* ft_strrchr( char* str, int chr )
{
	int temp;
	int	pos1;

	temp = -1;
	pos1 = 0;
	while (str[pos1] != '\0')
	{
		if (str[pos1] == chr)
			temp = pos1;
		pos1++;
	}
	if (temp != -1)
	{
		return(&str[temp]);
	}
	else
	{
		return NULL;
	}
}
