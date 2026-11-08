/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichow <yichow@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 16:46:14 by yichow            #+#    #+#             */
/*   Updated: 2026/11/08 17:06:32 by yichow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
   	size_t i;
    char *substr;
	int strl ;
	//Check s is not pointing to anything i.e. no value
    if (!s)
        return (NULL);
	strl = ft_strlen(s);

	//case
	//1. start > strl , return nothing ""
	//strl >= start + len
	//2. len + start < strl

    if (start > strl)
        return (ft_strdup(""));
	if (len > strl - start)
        len = strl - start;
    substr = ft_calloc(len + 1, sizeof(char));
    if (!substr)
        return (NULL);
    i = 0;
    while (i < len)
    {
        substr[i] = s[start + i];
        i++;
    }
    return (substr);
}

