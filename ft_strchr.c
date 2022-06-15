/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dugonzal <dugonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 14:09:58 by dugonzal          #+#    #+#             */
/*   Updated: 2022/06/09 14:34:49 by dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	*str;

	if (!s)
		return (NULL);
	str = (char *)s;
	i = 0;
	while (str[i] != c)
		i++;
	if (str[i] == c)
		return (&str[i]);
	return (str);
}

/*int	main(void)
{
	const char *s = "hola";
	int c = 'o';
	printf("%s", ft_strchr(s, c));
}*/

/*
La función strchr () devuelve un puntero,
a la primera aparición del carácter c en la cadena s
 */


/*
notas:
cuando le decimos si str en la pocision i es == c retorna str en la posicion i,
tenemos que pasarle con un & porque le estamos devolviendo una posicion de la cadena
y no la cadena que en ese caso seria un * para pasarle toda la cadena.
 */
