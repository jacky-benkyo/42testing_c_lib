/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichow <yichow@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 16:46:14 by yichow            #+#    #+#             */
/*   Updated: 2026/11/13 17:08:29 by yichow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int	i;
    char	*result;

	i = 0;
    result = malloc((ft_strlen(s) + 1) * sizeof(char));
    if (!result)
        return (NULL);
    while (i < ft_strlen(s))
    {
        /* applying the function f to each character of s
         * and storing the resultult in the new string result
         */
        result[i] = (*f)(i, s[i]);
        i++;
    }
    /* setting the NUL-terminating character */
    result[i] = 0;
    /* finally, we return result */
    return (result);
}

