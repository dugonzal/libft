/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 01:45:53 by ciclo             #+#    #+#             */
/*   Updated: 2023/05/02 20:41:15 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

/// @brief Allocates (with malloc(3)) and returns a substring from the
///string ’s’ The substring begins at index ’start’ and is of maximum size len
/// @brief aloja (con malloc (3)) y devuelve una subcadena de la cadena 's'.
/// La subcadena comienza en el índice 'start' y tiene un tamaño máximo de len
/// @param s The string from which to create the substring.
/// @param start The start index of the substring in the string ’s’.
/// @param len The maximum length of the substring.
/// @return The substring. NULL if the allocation fails.
char	*ft_substr(char const *str, unsigned int start, size_t n)
{
	char	*tmp;
	size_t	len;
	size_t	end;
	int		size;

	len = ft_strlen(str);
	if (!str)
		return (0);
	end = 0;
	tmp = NULL;
  if (start < n)
		end = len - start;
	else if (end > len)
		end = len;
  size = ft_strlen(str) + start - end;
  printf ("size = %d\n", size);
	ft_strndup(tmp, size);
	return (tmp);
}
