/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichow <yichow@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 16:46:14 by yichow            #+#    #+#             */
/*   Updated: 2026/11/13 16:43:30 by yichow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*       ssize_t write(size_t count;
                     int fd, const void buf[count], size_t count);
DESCRIPTION         top
       write() writes up to count bytes from the buffer starting at buf
       to the file referred to by the file descriptor fd.
*/

void	ft_putstr_fd(char *s, int fd)
{
    int	i;

    i = 0;
    while (s[i])
    {
        write(fd, &s[i], 1);
        i++;
    }
}

