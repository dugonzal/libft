/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 01:59:37 by ciclo             #+#    #+#             */
/*   Updated: 2023/06/05 05:22:23 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

/// @brief Allocates (with malloc(3)) and returns an array of strings obtained
/// by splitting ’s’ using the character ’c’ as a delimiter. The array must be
/// ended by a NULL pointer.
/// @param s The string to be split.
/// @param c The delimiter character.
/// @return The array of new strings resulting from the split. NULL if the
unsigned int	count_words(const char *str, char c)
{
	char	*tmp;
	int		words;

	if (!str || !c)
		return (0);
	words = 0;
	tmp = (char *)str;
	while (*tmp && *tmp == c)
		tmp++;
	while (*tmp)
	{
		while (*tmp && *tmp != c)
			tmp++;
		words++;
		while (*tmp && *tmp == c)
			tmp++;
	}
	return (words);
}

unsigned int	count_row(const char *str, char c)
{
	char	*tmp;
	int		row;

	if (!str || !c)
		return (0);
	tmp = (char *)str;
	row = 0;
	while (tmp[row] && tmp[row] != c)
		row++;
	return (row);
}

char	**ft_split(const char *str, char c, int free_flag)
{
	char			**tmp;
	int				row;
	int				i;

	if (!str || !c)
		return (NULL);
	tmp = (char **)ft_calloc(sizeof(char *), (count_words(str, c) + 1));
	if (!tmp)
		return (NULL);
	i = -1;
	while (*str)
	{
		while (str && *str == c)
			str++;
		row = count_row(str, c);
		tmp[++i] = ft_strndup(str, row);
		if (!tmp[i])
			return (NULL);
		str += row;
	}
	if (free_flag)
		free((char *)str);
	tmp[i] = NULL;
	return (tmp);
}
