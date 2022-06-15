/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dugonzal <dugonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 21:00:27 by dugonzal          #+#    #+#             */
/*   Updated: 2022/05/21 17:34:39 by dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* char	*ft_strdup(const char *s1)
{
	size_t	i;
	char	*str;

	if (!s1)
		return (NULL);
	str = (char *)malloc(ft_strlen(s1) * sizeof(char) + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	return (str);
} */

char	*ft_strdup(const char *s1)
{
	char	*dst;
	int		size;
	int		i;

	size = ft_strlen(s1);
	dst = malloc((size + 1) * sizeof(char));
	if (!dst)
		return (0);
	i = 0;
	while (s1[i] != '\0')
	{
		dst[i] = s1[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
