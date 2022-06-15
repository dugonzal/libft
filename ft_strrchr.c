/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dugonzal <dugonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 18:38:37 by neo               #+#    #+#             */
/*   Updated: 2022/05/25 10:58:12 by dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		str_len;
	char	*pointer;
	char	*result;

	result = 0;
	pointer = (((char *) s));
	str_len = 0;
	while (s[str_len])
	{
		if (s[str_len] == (((unsigned char)c)))
			result = &pointer[str_len];
		str_len++;
	}
	if (s[str_len] == ((char)c))
		result = &pointer[str_len];
	return (result);
}
/* busca la ultima posicion de c en la cadena y te hasta el final */
