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
	size_t			i;
	size_t			n_strings;
	unsigned char	in_string;

	i = 0;
	n_strings = 0;
	in_string = 0;
	while (s[i])
	{
		if (s[i] != c && in_string == 0)
		{
			in_string = 1;
			n_strings++;
		}
		else if (s[i] == c)
			in_string = 0;
		i++;
	}
	return (n_strings);
}

static	void	*free_array(char **array, size_t i)
{
	while (i > 0)
	{
		free(array[i - 1]);
		i--;
	}
	free(array);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	size_t	n_strings;
	char	*start;
	size_t	i;

	i = 0;
	n_strings = count_strings(s, c);
	array = (char **)malloc((n_strings + 1) * sizeof(char *));
	if (!array)
		return (NULL);
	while (i < n_strings)
	{
		while (*s == c)
			s++;
		start = (char *)s;
		while (*s && *s != c)
			s++;
		array[i] = ft_substr(start, 0, s - start);
		if (!array[i])
			return (free_array(array, i));
		i++;
	}
	array[i] = NULL;
	return (array);
}
