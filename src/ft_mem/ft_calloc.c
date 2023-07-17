/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 00:59:22 by ciclo             #+#    #+#             */
/*   Updated: 2023/07/18 00:12:18 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

/// @brief Allocates memory for an array of nmemb elements
/// of size bytes each and returns a pointer to the allocated memory.
/// The memory is set to zero.
/// @param nmemb Number of elements.
/// @param size Size of each element.
/// @return A pointer to the allocated memory.
void	*ft_calloc(size_t count, size_t size)
{
	char *ptr;

	ptr = (char *)malloc(count * size);
	if (!ptr)
		return (NULL);
	return (ft_memset(ptr, 0, count * size));
}
