/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dugonzal <dugonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 14:06:57 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/05/18 22:24:52 by dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

char	*ft_strndup(const char *str, size_t n)
{
	char	*tmp;

	if (!n)
		return ((char *)str);
	else if (!str)
		return (NULL);
	tmp = ft_calloc((n + 1), sizeof(char));
	if (!tmp)
		return (NULL);
	ft_strlcpy(tmp, (char *)str, n + 1);
	return (tmp);
}
