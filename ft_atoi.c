/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichow <yichow@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 16:52:53 by yichow            #+#    #+#             */
/*   Updated: 2026/11/13 15:55:08 by yichow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	res;
	int	i;
	int	sign;

	i = 0;
	res = 0;
	sign = 1;
	//check whitespace character
	while (((nptr[i] >= 9) && (nptr[i] <= 13)) || (nptr[i] == 32))
		i++;
	if (nptr[i] == '+' && nptr[i+1] != '-' )
		i++;
	if (nptr[i] == '-')
	{
		sign = -1;
		i++;
	}
	while ((nptr[i] != '\0') && (nptr[i] >= 48) && (nptr[i] <= 57))
	{
		res = res * 10 + (nptr[i] - '0');
		i++;
	}
	return (res * sign);
}
