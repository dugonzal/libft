/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   err.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 18:10:26 by ciclo             #+#    #+#             */
/*   Updated: 2023/07/20 12:35:45 by Dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

/// @brief  mensaje  de  error mas  mensaje pesonalizadi
/// y salida con 1
/// @param str parametro de  mensaje presonalizado
void	err(char *str)
{
	ft_printf (RED"Error: %s\n"RESET, str);
	exit (1);
}

int	err_ret(char *str)
{
	ft_printf (RED"Error: %s\n"RESET, str);
	exit (1);
}
