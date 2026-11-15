/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichow <yichow@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 16:52:41 by yichow            #+#    #+#             */
/*   Updated: 2026/11/15 19:58:21 by yichow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	pos1;
	int	check;
	size_t	little_len;
	size_t	big_len;
	if (len == 0)
		return (NULL);
	if ((!big || !little))
		return (NULL);
	little_len = ft_strlen(little);
	big_len = ft_strlen(big);
	if (big_len < little_len || (little[0] == '\0'))
		return ((char *) big);
	pos1 = 0;
	while (pos1 < len)
	{
		if (big[pos1] == little[0] && ((pos1 + little_len) <= len))
		{
			check = ft_strncmp((big + pos1), little, little_len);
			if (check == 0)
				return ((char *)&big[pos1]);
		}
		pos1++;
	}
	return (NULL);
}
//locates the first occurrence of the  null-terminated string  little  in  the  string big,
//where not more than len characters are searched
//Empty little check first: The function
//immediately checks if (*little == '\0') and returns (char *)big.
//Precedence over len: Because the empty-string check
//executes first, len == 0 does not prevent a match.
//Difference from non-empty little: If little is not empty and len == 0,
//the loop terminates immediately and returns NULL.
