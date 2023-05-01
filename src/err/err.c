/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   err.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciclo <ciclo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 18:10:26 by ciclo             #+#    #+#             */
/*   Updated: 2023/05/01 19:47:18 by ciclo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

/// @brief  mensaje  de  error mas  mensaje pesonalizadi
/// y salida con 1
/// @param str parametro de  mensaje presonalizado
void	err(char *str)
{
	printf (RED"Error: %s\n"RESET, str);
	exit (1);
}
