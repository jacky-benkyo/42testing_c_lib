/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichow <yichow@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 16:46:14 by yichow            #+#    #+#             */
/*   Updated: 2026/11/13 17:11:47 by yichow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
    char *dest;
    size_t i;


    dest = (char *) malloc(ft_strlen(s) + 1);
    if (!dest)
        return (NULL);
    i = 0;

    while (s[i])
    {
        dest[i] = s[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

