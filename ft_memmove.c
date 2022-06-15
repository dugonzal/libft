/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dugonzal <dugonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 08:26:54 by dugonzal          #+#    #+#             */
/*   Updated: 2022/06/09 09:23:52 by dugonzal         ###   ########.fr       */
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
			//printf ("%zu", ft_strlen(src));
			while (len--)
				((char *)dst)[len] = ((char *)src)[i];
		}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}

/*
int	main(void)
{
	char dst[4];
	const char *s = ft_memmove(dst, "hola", 3);;

	printf ("%s", s);
}
*/


/*
 * cuando pomemos la condiciom de si la fuente es mayor al destino tenemos que meterle lem em vez de i
 */
