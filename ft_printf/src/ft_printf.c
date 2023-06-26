/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dugonzal <dugonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 15:13:20 by ciclo             #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2023/05/09 16:02:45 by Dugonzal         ###   ########.fr       */
=======
/*   Updated: 2023/06/05 05:18:46 by Dugonzal         ###   ########.fr       */
>>>>>>> main
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

	i = -1;
	length = 0;
	va_start(arg, str);
	while (str[++i])
<<<<<<< HEAD
=======
	{
>>>>>>> main
		if (str[i] == '%')
		{
			length += ft_formats(arg, str[i + 1]);
			i++;
		}
		else
			length += ft_putchar(str[i]);
	va_end(arg);
	return ((int)length);
}

