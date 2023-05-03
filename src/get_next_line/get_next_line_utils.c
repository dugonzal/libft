/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 14:55:39 by dugonzal          #+#    #+#             */
/*   Updated: 2023/05/02 21:10:05 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/get_next_line.h"

int	find(char *str, int c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == (char)c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_strlen2(char *str)
{
	int	i;

	i = -1;
	if (!str)
		return (0);
	while (str[++i])
		;
	return (i);
}

char	*ft_strjoin2(char *s1, char *s2)
{
	char	*tmp;
	int		i;
	int		j;

	if (!s1 && !s2)
		return (NULL);
	tmp = (char *)malloc(sizeof (char) * (ft_strlen2(s1) + ft_strlen2(s2)) + 1);
	if (!tmp)
		return (NULL);
	i = 0;
	tmp[i] = 0;
	if (s1)
		while (s1[i])
		{
			tmp[i] = s1[i];
			i++;
		}
	j = 0;
	while (s2[j] != 0)
		tmp[i++] = s2[j++];
	tmp[i] = 0;
	free (s1);
	return (tmp);
}
