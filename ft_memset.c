/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dugonzal <dugonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 22:33:24 by dugonzal          #+#    #+#             */
/*   Updated: 2022/05/17 07:21:43 by dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	esta funcion nos pasa un string void (str), y tenemos que comnvertirlo
	creamos una variable para hecer la conversion,
	la igualamos de esta manera d = (char *)str;
*/

#include "libft.h"

void	*ft_memset(void *str, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((char *)str)[i] = c;
		i++;
	}
	return (str);
}

/*  The memset() function writes len bytes of value c
(converted to an unsigned char) to the string b. */
