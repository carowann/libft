/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwannhed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 12:12:07 by cwannhed          #+#    #+#             */
/*   Updated: 2024/11/20 12:13:40 by cwannhed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (dest > src)
	{
		while (n > 0)
		{
			ft_memcpy(dest + n - 1, src + n -1, 1);
			n--;
		}
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
