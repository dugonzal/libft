/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciclo <ciclo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 09:25:36 by dugonzal          #+#    #+#             */
/*   Updated: 2022/07/08 16:16:20 by ciclo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	if (!dst && !src)
		return (0);
	i = 0;
	while (i < size)
	{
		dst[i] = (char)src[i];
		i++;
	}
	dst[i] = 0;
	i = ft_strlen(src);
	return (i);
}

/*int	main(void)
{
	char dst[5];
	const char *s = "echo";
	printf("%lu", ft_strlcpy(dst, s, 4));
}
*/
