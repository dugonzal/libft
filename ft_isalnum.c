/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dugonzal <dugonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 00:50:51 by dugonzal          #+#    #+#             */
/*   Updated: 2022/06/09 08:03:21 by dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	else
		return (0);
}


/*
 * (@param) 
 *
 * (@funcionamiento): con esta funcion comprabamos si el parametro c es alfanumerico, si es el caso retornamos uno, y si el parametro c no es alfanumerico retornamos 0.
 *
 * la clave de programar es llamar  a las funcionciones anteriores
 * 
 *
*/
