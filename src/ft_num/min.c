/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciclo <ciclo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 08:13:08 by ciclo             #+#    #+#             */
/*   Updated: 2022/12/25 08:15:37 by ciclo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

/// @brief haya el numero minimo de un arry
/// @param tab arrray en el que buscamos el numero minimo
/// @param len longitud de busqueda
/// @return numero minirmo encontrado en el array
int	min(int *tab, int len)
{
	int tmp;

	tmp = tab[--len];
	while (len--)
		if (tab[len] < tmp)
			tmp = tab[len];
	return (tmp);
}
