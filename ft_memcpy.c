/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwannhed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 11:13:58 by cwannhed          #+#    #+#             */
/*   Updated: 2024/11/20 11:54:39 by cwannhed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int				*c;
	unsigned char	*p;

	p = (unsigned char *)dest;
	c = NULL;
	while (n > 0)
	{
		c = (int *)src;
		ft_memset(p, *c, 1);
		src++;
		p++;
		n--;
	}
	return (dest);
}
