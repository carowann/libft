/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caroline <caroline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 11:37:11 by cwannhed          #+#    #+#             */
/*   Updated: 2024/12/01 22:03:20 by caroline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	count_strings(char const *s, char c)
{
	size_t			count;
	unsigned char	in_string;

	count = 0;
	in_string = 0;
	while (*s)
	{
		if (*s != c && !in_string)
		{
			in_string = 1;
			count++;
		}
		else if (*s == c)
			in_string = 0;
		s++;
	}
	return (count);
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
	char	*start;
	size_t	n_strings;
	size_t	i;

	n_strings = count_strings(s, c);
	array = (char **)malloc((n_strings + 1) * sizeof(char *));
	if (!array)
		return (NULL);
	i = 0;
	while (i < n_strings)
	{
		while (*s == c)
			s++;
		start = (char *)s;
		while (*s && *s != c)
			s++;
		array[i] = (char *)malloc((s - start + 1) * sizeof(char));
		if (!array[i])
			return (free_array(array, i));
		ft_strlcpy(array[i], start, s - start + 1);
		i++;
	}
	array[i] = NULL;
	return (array);
}
