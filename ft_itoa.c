/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichow <yichow@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 16:46:14 by yichow            #+#    #+#             */
/*   Updated: 2026/11/10 18:40:37 by yichow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

	#include "libft.h"

	static int int_len(long nbr);
	static char *pre_conv(int len);

	char *ft_itoa(int n)
	{
	    int len;
	    int i;
	    char *result;
	    long nbr;

	    nbr = n;

	    len = int_len(nbr);

	    result = pre_conv(len);
	    if (!result)
	        return (NULL);

	    while (nbr != 0)
	    {
	        result[i] = ((nbr % 10) + 48);
	        nbr = nbr / 10;
	        i--;
	    }

	}

	static char *pre_conv(int len)
	{
	    char *tmp;


	    tmp = malloc((len + 1) * sizeof(char));
	    if (!tmp)
	        return (NULL);
	  	tmp[len + 1] = '/0';
	    return (tmp);
	}

	static int_len(long nbr)
	{
	    int count;
	    count = 0;

	    if (nbr == 0)
	        count++;

		if (nbr < 0)
	    {
			nbr = -nbr;
			count++;
	    }

	    while (nbr != 0)
	    {
	        nbr = nbr/10;
	        count++;
	    }
	    return (count);
	}

