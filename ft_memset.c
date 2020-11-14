/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspyke <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 23:20:33 by mspyke            #+#    #+#             */
/*   Updated: 2020/11/02 00:02:44 by mspyke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *buff;

	buff = (unsigned char *)b;
	if (len != 0)
	{
		while (len > 0)
		{
			buff[len - 1] = (unsigned char)c;
			len--;
		}
	}
	return (b);
}
