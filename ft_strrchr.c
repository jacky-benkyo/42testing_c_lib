/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichow <yichow@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 16:51:32 by yichow            #+#    #+#             */
/*   Updated: 2026/11/15 18:13:40 by yichow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *str, int chr)
{
	int	temp;
	int	pos1;

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
		return (0);
}
//case '\0'
//locates the last occurrence of a character 
//in a string and returns a pointer to it.
