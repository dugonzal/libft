/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciclo <ciclo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 00:44:32 by ciclo             #+#    #+#             */
/*   Updated: 2022/07/10 00:57:16 by ciclo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] && s2[i] && i < n) // mientras que s1 y s2 no sean null y i sea menor a n
	{
		if (s1[i] != s2[i]) // si s1 y s2 no son iguales
			return (s1[i] - s2[i]); // retorna el valor de s1 menos s2, la diferencia de caracteres
		i++;
	}
	if (i == n) // si son iguales return 0
		return (0);
	return (s1[i] - s2[i]);
}

/*
int	main(void)
{
	const char *s1 = "123";
	const char *s2 = "123";
	size_t n = 4;
	printf("create: {%d}\n", ft_strncmp(s1, s2, n));
	printf("original: {%d}\n", strncmp(s1, s2, n));
}
*/
/*comparara n caracteres de s1 y s2*/
