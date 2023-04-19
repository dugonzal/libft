/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 01:45:21 by ciclo             #+#    #+#             */
/*   Updated: 2023/04/19 11:16:30 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

/// @brief Allocates (with malloc(3)) and returns a copy of ’s1’ with the
/// characters specified in ’set’ removed from the beginning and the end of the
/// string.
/// @param s1 The string to be trimmed.
/// @param set The reference set of characters to trim.
/// @return The trimmed string. NULL if the allocation fails.
int	setcheck(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set, int free_s1)
{
	char	*str;
	int		start;
	int		end;
	int		i;

	i = 0;
	start = 0;
	if (!s1 || !set)
		return (NULL);
	end = strlen(s1);
	if (!end)
		return (NULL);
	while (s1[start] && setcheck(s1[start], set))
		start++;
	while (end > start && setcheck(s1[end - 1], set))
		end--;
	str = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!str)
		return (NULL);
	while (start < end)
		str[i++] = s1[start++];
	str[i] = 0;
	if (free_s1)
		free((char *)s1);
	return (str);
}

