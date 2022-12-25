/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciclo <ciclo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 08:11:51 by ciclo             #+#    #+#             */
/*   Updated: 2022/12/25 08:14:39 by ciclo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

/// @brief haya el numero maximo de un array
/// @param tab
/// @param len
/// @return
int	max(int *tab, int len)
{
	int tmp;

	tmp = tab[--len];
	while (len--)
		if (tab[len] > tmp)
			tmp = tab[len];
	return (tmp);
}
