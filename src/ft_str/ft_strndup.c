/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 14:06:57 by Dugonzal          #+#    #+#             */
/*   Updated: 2023/04/27 14:12:24 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

char *ft_strndup(const char *str, int n)
{
	char *tmp;

	if (!str || !n)
	  return (NULL);
	tmp = malloc(sizeof(char) * (n + 1));
	if (!tmp)
		return (NULL);
	ft_strlcpy(tmp, str, n + 1);
	return (tmp);
}
