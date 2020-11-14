/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspyke <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 21:25:27 by mspyke            #+#    #+#             */
/*   Updated: 2020/11/08 22:02:29 by mspyke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_lstsize(t_list *lst)
{
	int		len;
	t_list	*tmp;

	if (lst == NULL)
		return (0);
	if (lst->next == NULL)
		return (1);
	len = 0;
	tmp = lst;
	while (tmp->next != NULL)
	{
		len++;
		tmp = tmp->next;
	}
	return (len + 1);
}
