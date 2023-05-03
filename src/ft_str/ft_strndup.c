/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciclo <ciclo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 14:06:57 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/05/03 11:16:30 by ciclo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

char	*ft_strndup(const char *str, size_t n)
{
	char *tmp;

	if (!n)
	  return ((char *)str);
	else if (!str)
		return (NULL);
	tmp = malloc(sizeof(char) * (n + 1));
	if (!tmp)
		return (NULL);
	ft_strlcpy(tmp, (char *)str, n + 1);
	tmp[n] = 0;
	return (tmp);
}
