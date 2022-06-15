/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dugonzal <dugonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 13:36:23 by dugonzal          #+#    #+#             */
/*   Updated: 2022/05/24 19:38:38 by dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_numsize(int n)
{
	size_t	size;

	size = 0;
	if (n < 0)
	{
		size++;
		n = -n;
	}
	if (n == 0)
		size++;
	while (n != 0)
	{
		n = n / 10;
		size++;
	}
	return (size);
}

char	*ft_min_value(char	*itoa)
{
	ft_strlcpy(itoa, "-2147483648", 12);
	return (itoa);
}

char	*ft_itoa(int n)
{
	char	*itoa;
	size_t	numsize;
	int		aux_n;

	aux_n = n;
	numsize = ft_numsize(n);
	itoa = (char *)malloc(sizeof(char) * numsize + 1);
	if (!itoa)
		return (NULL);
	if (n == -2147483648)
		return (ft_min_value(itoa));
	itoa[numsize--] = '\0';
	if (n < 0)
	{
		n = -n;
		itoa[0] = '-';
	}
	while (numsize > 0)
	{
		itoa[numsize--] = (n % 10) + '0';
		n = n / 10;
	}
	if (aux_n >= 0)
		itoa[numsize] = n + '0';
	return (itoa);
}
