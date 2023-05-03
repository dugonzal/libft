/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciclo <ciclo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 15:13:20 by ciclo             #+#    #+#             */
/*   Updated: 2023/05/03 13:51:21 by ciclo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

/// @brief Función principal de ft_printf.
/// @param str
/// @param
/// @return el numero de caracteres impreso
int	ft_printf(char const *str, ...)
{
	size_t		i;
	size_t		length;
	va_list		arg;

	if (!str)
		return (-1);
	i = -1;
	length = 0;
	va_start(arg, str);
	while (str[++i])
	{
		if (str[++i] == '%')
			length += ft_formats(arg, str[i + 1]);
		else
			length += ft_putchar(str[i]);
	}
	va_end(arg);
	return ((int)length);
}
