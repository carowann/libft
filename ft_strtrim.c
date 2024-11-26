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
#include <stdio.h>
char *ft_strtrim(char const *s1, char const *set)
{
	char			*str;
	unsigned int	start;
	size_t			i;
	size_t			len;
	size_t			to_trim;

	start = 0;
	i = ft_strlen(s1);
	to_trim = 0;
	while (*s1 &&  ft_strchr(set, s1[start]))
	{
		start++;
		to_trim++;
	}
	while (*s1 &&  ft_strchr(set, s1[i]))
	{
		i--;
		to_trim++;
	}
	len = ft_strlen(s1) - to_trim + 1;
	str = ft_substr(s1, start, len);
	return (str);
}