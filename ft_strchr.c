/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwannhed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 18:13:49 by cwannhed          #+#    #+#             */
/*   Updated: 2024/11/20 18:14:02 by cwannhed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*ptr;

	ptr = (char *)s;
	while (*s)
	{
		if (*s == c)
			return (ptr);
		s++;
		ptr++;
	}
	if (*s == '\0')
		return (ptr);
	return (NULL);
}
