/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dugonzal <dugonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 19:36:33 by neo               #+#    #+#             */
/*   Updated: 2022/05/24 21:04:25 by dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while ((s1[i] == s2[i]) && (i < (n - 1)) && (s1[i] != '\0'))
			i++;
	return ((unsigned char)(s1[i]) - (unsigned char)(s2[i]));
}
/* te devuelve la diferencia entre las
 cadenas s1 != s2  si son igualer retorna 0*/
