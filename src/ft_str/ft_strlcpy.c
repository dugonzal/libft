/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciclo <ciclo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
<<<<<<< HEAD
/*   Created: 2022/09/25 21:36:46 by ciclo             #+#    #+#             */
/*   Updated: 2022/09/25 22:11:00 by ciclo            ###   ########.fr       */
=======
/*   Created: 2022/09/12 01:25:31 by ciclo             #+#    #+#             */
/*   Updated: 2022/09/12 02:01:28 by ciclo            ###   ########.fr       */
>>>>>>> parent of a0d2ffc (update algunas funciones no pasan los test revisarlas (funciones que no pasan los test:  Failed tests: strchr, memcmp, striteri, strtrim, ft_memcmp, ft_striteri, atoi, ft_strtrim, ft_itoa, itoa, ft_strchr))
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len;

<<<<<<< HEAD
	i = 0;
	len = ft_strlen(src);
	if (dstsize == 0)
		return (len);
	while ((i < dstsize - 1) && src[i] != 0)
	{
		dst[i] = src[i];
		i++;
	}
=======
	if (!dst || !src)
		return (0);
	srcsize = ft_strlen(src);
	i = 0;
	if (dstsize != 0)
		while (src[i++] != 0 && i < (dstsize - 1))
			dst[i] = src[i];
>>>>>>> parent of a0d2ffc (update algunas funciones no pasan los test revisarlas (funciones que no pasan los test:  Failed tests: strchr, memcmp, striteri, strtrim, ft_memcmp, ft_striteri, atoi, ft_strtrim, ft_itoa, itoa, ft_strchr))
	dst[i] = 0;
	return (len);
}
