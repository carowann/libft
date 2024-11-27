/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwannhed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 11:37:11 by cwannhed          #+#    #+#             */
/*   Updated: 2024/11/27 11:37:14 by cwannhed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	count_strings(char const *s, char c)
{
	size_t	i;
	size_t	n_strings;
	unsigned char	in_string;

	i = 0;
	n_strings = 0;
	in_string = 1;
	while (s[i])
	{
		if (s[i] == c && in_string == 1)
		{
			in_string = 0;
			n_strings++;
		}
		else if (s[i] != c && in_string == 0)
			in_string = 1;
		i++;
	}
	return (n_strings);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	char	*ptr;
	size_t	n_strings;

	ptr = ft_strtrim(s, c);
	n_strings = count_strings(ptr, c);
	array = (char **)malloc((n_strings + 1) * sizeof(char));
	if (!array)
		return (NULL);
	while (*ptr)
	{
		ptr = ft_strchr(ptr, c);
		while (*ptr == c)
			ptr++;
		array[i] = (char *)malloc(         * sizeof(char));
		if (!array[i])
			return (NULL);
		i++;
	}
	free(ptr);
}
