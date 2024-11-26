/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwannhed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 12:06:06 by cwannhed          #+#    #+#             */
/*   Updated: 2024/11/26 12:06:07 by cwannhed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	char			*str;
	unsigned int	start;
	size_t			len;
	size_t			i;
	size_t			j;

	start = 0;
	i = 0;
	j = 0;
	while (set[i])
	{
		if(set[i] == s1[j])
		{
			start++;
			j++;
		}
		i++;
	}
	str = ft_substr(s1, start, len);
	return (str);
}

