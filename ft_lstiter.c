/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_lstiter.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: yichow <yichow@student.42heilbronn.de>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/19 16:46:14 by yichow           #+#    #+#              */
/*   Updated: 2026/11/22 15:46:35 by yichow          ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*temp;

	if (!lst)
		return (NULL);
	temp = lst;
	while (temp)
	{
		f(temp->content);
		temp = temp->next;
	}
}
