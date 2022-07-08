/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciclo <ciclo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 08:26:54 by dugonzal          #+#    #+#             */
/*   Updated: 2022/07/08 16:20:59 by ciclo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if (!dst && !dst)
		return (NULL);
	i = 0;
	if (src > dst)
	{
		while (len--)
			((char *)dst)[len] = ((char *)src)[i];
		dst[i] = 0;
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
